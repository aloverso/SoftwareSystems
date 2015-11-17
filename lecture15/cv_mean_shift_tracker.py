#!/usr/bin/env python  
import roslib
import rospy
from math import *
import random
from std_msgs.msg import String
from geometry_msgs.msg import Twist, Vector3
from sensor_msgs.msg import LaserScan
import cv2
import numpy as np
from cv2 import cv

wall = False

def scan_received(msg):
  """ Processes data from the laser scanner, msg is of type sensor_msgs/LaserScan """
  global wall
  avoidrange = 1
  mean_distance = 0
  valid_ranges = []
  for i in range(354,359):
    if len(msg.ranges) > 0:
      if msg.ranges[i] > 0 and msg.ranges[i] < 8:
        valid_ranges.append(msg.ranges[i])
        if len(valid_ranges) > 0:
          mean_distance = sum(valid_ranges)/len(valid_ranges)
        else:
          mean_distance = 0;
  if mean_distance > avoidrange or mean_distance==0:
    wall = False
  elif mean_distance < avoidrange:
    wall = True

def approach_wall():
  ''' prevents the Neato from running into the wall '''
    rospy.init_node('teleop', anonymous=True)
    r = rospy.Rate(10) # 10hz
    while not rospy.is_shutdown():
        if mean_distance != -1.0:
            velocity_msg = Twist(Vector3(0.2*(mean_distance - 1.0), 0.0, 0.0), Vector3(0.0, 0.0, 0.0))
        pub.publish(velocity_msg)
        r.sleep()

def calibrate(images):
  ''' calibrates the image by averaging out the background '''
  i = 0
  avg = []
  gaussian_images = images
  while i < len(gaussian_images):
    im = gaussian_images[i]
    hist = cv2.calcHist([im], [0], None, [256], [0,256])
    avg.append(hist[255])
    i+=1
  return avg

def track_color():
  ''' captures frame from webcame, creates thresholded and gaussian blur images '''
  ret, frame = cap.read()
  cimg = frame

  gaussian_images = []

  img_HSV = cv2.cvtColor(cimg, cv.CV_BGR2HSV)
  
  
  red_Threshed = cv2.inRange(img_HSV, np.array((2,50, 50)), np.array((8,170,200)))
  red_gaussian = cv2.GaussianBlur(red_Threshed, (9,9), 2, 2)

  blue_Threshed = cv2.inRange(img_HSV, np.array((100,0,0)), np.array((120,255,255)))
  blue_gaussian = cv2.GaussianBlur(blue_Threshed, (9,9), 2, 2)

  green_Threshed = cv2.inRange(img_HSV, np.array((66,50,50)), np.array((94,255,255)))
  green_gaussian = cv2.GaussianBlur(green_Threshed, (9,9), 2, 2)

  pink_Threshed = cv2.inRange(img_HSV, np.array((165,70, 60)), np.array((180,255,255)))
  pink_gaussian = cv2.GaussianBlur(pink_Threshed, (9,9), 2, 2)

  yellow_Threshed = cv2.inRange(img_HSV, np.array((25,70,70)), np.array((40,255,255)))
  yellow_gaussian = cv2.GaussianBlur(yellow_Threshed, (9,9), 2, 2)

  total_threshed = red_Threshed + blue_Threshed + green_Threshed + pink_Threshed + yellow_Threshed
  total_gaussian = red_gaussian + blue_gaussian + green_gaussian + pink_gaussian + yellow_gaussian

  cv2.imshow("threshed", total_threshed)
  c = cv2.waitKey(1)

  gaussian_images.append(red_gaussian)
  gaussian_images.append(blue_gaussian)
  gaussian_images.append(green_gaussian)
  gaussian_images.append(pink_gaussian)
  gaussian_images.append(yellow_gaussian)

  return gaussian_images

def identify_command(thumb, index, middle, ring, pinky):
  """we can check to see if we can see the finger in our frame, from there decide what our command is going to be
  calculating relative positions is kind of difficult."""
  command = "."
  print thumb, index, middle, ring, pinky;
  sub = rospy.Subscriber('scan', LaserScan, scan_received)

  if (thumb & ~index & ~middle & ~ring & ~pinky): #only thumb
    command = "done"
  elif (~thumb & index & ~middle & ~ring & ~pinky): #only index
    command = "forward1"
  elif (~thumb & index & middle & ~ring & ~pinky): #index + middle
    command = "forward2"
  elif (~thumb & index & middle & ring & ~pinky): # index, middle, ring (three fingers)
    command = "forward3"
  elif (~thumb & index & ~middle & ring & pinky): # index, middle, ring, pinky (four fingers)
    command = "back"
  elif (thumb & index & middle & ring & pinky) == 1: #all five fingers
    command = "stop"
  elif (~thumb & ~index & ~middle & ring & pinky): #ring and pinky finger
    command = "left"
  elif (~thumb & ~index & ~middle & ~ring & pinky): #just pinky finger
    command = "right"
  elif (~thumb & index & ~middle & ~ring & pinky): # index + pinky = metal hand
    command = "metal"
  else: #all five fingers
    command = "stop"
  
  if wall == True: # if we're in front of a wall, no forward commands allowed
    if "forward" in command:
      command = "stop"

  if command != ".":
    print command
  return command

def control_robot(command):
  ''' translates a command into a motor Twist message and publishes it to the robot '''
  r = rospy.Rate(100)
  pub = rospy.Publisher('cmd_vel', Twist, queue_size=10)


  if command == "back":    
      msg = Twist (Vector3 (-0.5, 0, 0), Vector3 (0, 0, 0))
  elif "forward" in command:
    speed = int(command[len(command)-1:])
    msg = Twist (Vector3 (0.5*(speed), 0, 0), Vector3 (0, 0, 0))
  elif command == "left":
    msg = Twist (Vector3 (0, 0, 0), Vector3 (0, 0, -1))
  elif command == "right":
    msg = Twist (Vector3 (0, 0, 0), Vector3 (0, 0, 1))
  elif command == "stop":
    msg = Twist (Vector3 (0, 0, 0), Vector3 (0, 0, 0))
  elif command == "metal":
    pn = 1
    posneg = random.random()
    if posneg > 0.5:
      pn = -1
    msg = Twist (Vector3 (0, 0, 0), Vector3 (0, 0, pn*random.random()+0.5))
  else:
    msg = Twist (Vector3 (0, 0, 0), Vector3 (0, 0, 0))
  pub.publish(msg)
  r.sleep()


def find_existing(image, average):
  """finds whether the finger exists or not. Returns true or false"""
  hist = cv2.calcHist([image], [0], None, [256], [0,256])
  threshold = 100
  if (hist[255] - average) > threshold:
    return 1
  else:
    return 0

def find_meanshift(image):
  """finds which third of image finger exists in
  this isn't used, because it didn't actually work, but we
  attempted it """
  rows, cols = np.shape(image)
  # setup initial location of window
  r,h,c,w = rows/2,10,cols/2,10  # simply hardcoded the values
  track_window = (c,r,w,h)

  term_crit = ( cv2.TERM_CRITERIA_EPS | cv2.TERM_CRITERIA_COUNT, 10, 1 )
  ret, track= cv2.meanShift(image, track_window, term_crit)
  x,y,w,h = track
  return (x,y)

if __name__ == "__main__":
  initialize = True
  #rospy.init_node('neato_controller', anonymous=True)
  cap = cv2.VideoCapture(0)

  average_values = [200, 200, 200, 200, 200]
  average_averages = []
  i=0
  while not rospy.is_shutdown():

    # get images for each finger
    gaussian_images = track_color()
    thumb   =   gaussian_images[0] #red
    index   =   gaussian_images[1] #blue
    middle  =   gaussian_images[2] #green
    ring  =   gaussian_images[3] #pink
    pinky   =   gaussian_images[4] #yellow

    if i<20: # average first 20 background frames
      average_averages.append(calibrate(gaussian_images))
    if i==20: # create averages list based on forst 20 frames
      avg_thumb = 0
      avg_index = 0
      avg_middle = 0
      avg_ring = 0
      avg_pinky = 0
      for average in average_averages:
        avg_thumb += average[0]
        avg_index += average[1]
        avg_middle += average[2]
        avg_ring += average[3]
        avg_pinky += average[4]
      average_values = [avg_thumb/20, avg_index/20, avg_middle/20, avg_ring/20, avg_pinky/20]
        
    #find_meanshift(index)

    # determines state of each finger for this
    thumb_state = find_existing(thumb, average_values[0])
    index_state = find_existing(index, average_values[1])
    middle_state = find_existing(middle, average_values[2])
    ring_state =  find_existing(ring, average_values[3])
    pinky_state = find_existing(pinky, average_values[4])

    # determine what the motor command translates as
    command = identify_command(thumb_state, index_state, middle_state, ring_state, pinky_state)
    
    # control robot adter 20 frames
    if i>20:
      control_robot(command)
    i += 1
