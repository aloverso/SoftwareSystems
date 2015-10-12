//Sine out w/ 40kHz sampling rate
//by Amanda Ghassaei
//http://www.instructables.com/id/Arduino-Audio-Output/
//Sept 2012

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
*/

byte sine[] = {127, 134, 142, 150, 158, 166, 173, 181, 188, 195, 201, 207, 213, 219, 224, 229, 234, 238, 241, 245, 247, 250, 251, 252, 253, 254, 253, 252, 251, 250, 247, 245, 241, 238, 234, 229, 224, 219, 213, 207, 201, 195, 188, 181, 173, 166, 158, 150, 142, 134, 127, 119, 111, 103, 95, 87, 80, 72, 65, 58, 52, 46, 40, 34, 29, 24, 19, 15, 12, 8, 6, 3, 2, 1, 0, 0, 0, 1, 2, 3, 6, 8, 12, 15, 19, 24, 29, 34, 40, 46, 52, 58, 65, 72, 80, 87, 95, 103, 111, 119,};
int t = 0;//time

const float C = 10000/261.6;
const float D = 10000/293.7;
const float E = 10000/329.6;
const float F = 10000/349.2;
const float G = 10000/392.0;
const float A = 10000/440.0;
const float B = 10000/493.9;
const float C2 = 10000/523.3;


void setup(){
  //set digital pins 0-7 as outputs
  for (int i=0;i<8;i++){
    pinMode(i,OUTPUT);
  }
  
  cli();//disable interrupts
  //set timer0 interrupt at 40kHz
  TCCR0A = 0;// set entire TCCR0A register to 0
  TCCR0B = 0;// same for TCCR0B
  TCNT0  = 0;//initialize counter value to 0
  // set compare match register for 40khz increments
  OCR0A = G;// = (16*10^6) / (40000*8) - 1 (must be <256)
  // turn on CTC mode
  TCCR0A |= (1 << WGM01);
  // Set CS11 bit for 8 prescaler
  TCCR0B |= (1 << CS11); 
  // enable timer compare interrupt
  TIMSK0 |= (1 << OCIE0A);
  sei();//enable interrupts
  
}


ISR(TIMER0_COMPA_vect){ //40kHz interrupt routine
  PORTD = sine[t];//send sine wave to DAC, centered around (127/255)*5 = 2.5V
  t++;//increment t
  if (t > 99){//reset t to zero
    t = 0;
  }
}

void loop(){
  //do other stuff here

    // set compare match register for 40khz increments
  OCR0A = G;// = (16*10^6) / (40000*8) - 1 (must be <256)
  delay(1000);
  OCR0A = A;// = (16*10^6) / (40000*8) - 1 (must be <256)
  delay(1000);
  OCR0A = G;
  delay(1000);
}


