//Sine out
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

byte tones[8][100];
int sel;
bool res;
byte *sel_tone;// = tones[1];
  
void setup(){

  Serial.begin(9600);
  
  //set digital pins 0-7 as outputs
  for (int i=0;i<8;i++){
    pinMode(i,OUTPUT);
  }

  for (int i=1; i<9; i++){
    for (int t=0;t<100;t++){//increment "t"
      tones[i-1][t] = 127+127*sin(2*3.14*t*i/100);
    }
  }

  for (int i=8; i<13; i++){
    pinMode(i, INPUT);  
  }

}
 
void loop(){
  
  for(int i=8; i<13; i++){
    res = digitalRead(i);
    if(i == 13){
      sel = 0;
    }
    
    if(res == 1){
      sel = i-7;
      Serial.println("setting sel");
      Serial.println(sel);
      break;
    }

  }

  Serial.println(sel);
  if(sel != 0){
    sel_tone = tones[sel];
    
    for (int j=0;j<100;j++){
      for (int t=0;t<100;t++){//increment "t"
        PORTD = sel_tone[t];//send sine wave to DAC, centered around (127/255)*5 = 2.5V
        delayMicroseconds(50);//wait 50us
      }
    }
  }
  
  //delay(1000);
}
