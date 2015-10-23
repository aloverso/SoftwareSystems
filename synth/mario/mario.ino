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
#include <avr/interrupt.h>

#ifndef cbi // Definitions for setting and clearing register bits
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#endif
#ifndef sbi
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))
#endif

byte sine[] = {127, 134, 142, 150, 158, 166, 173, 181, 188, 195, 201, 207, 213, 219, 224, 229, 234, 238, 241, 245, 247, 250, 251, 252, 253, 254, 253, 252, 251, 250, 247, 245, 241, 238, 234, 229, 224, 219, 213, 207, 201, 195, 188, 181, 173, 166, 158, 150, 142, 134, 127, 119, 111, 103, 95, 87, 80, 72, 65, 58, 52, 46, 40, 34, 29, 24, 19, 15, 12, 8, 6, 3, 2, 1, 0, 0, 0, 1, 2, 3, 6, 8, 12, 15, 19, 24, 29, 34, 40, 46, 52, 58, 65, 72, 80, 87, 95, 103, 111, 119,};
int t = 0;//time

int no_notes = 0;

  ///////////
 // NOTES //
///////////
const float X = 0;
const float C_3 = (10000/(130.81/2));
const float D_3 = (10000/(146.83/2));
const float E_3 = (10000/(164.81/2));
const float F_3 = (10000/(174.61/2));
const float G_3 = (10000/(196.00/2));
const float A_3 = (10000/(220.00/2));
const float B_3 = (10000/(246.94/2));
const float C_4 = (10000/(261.63/2));
const float D_4 = (10000/(293.66/2));
const float E_4 = (10000/(329.63/2));
const float F_4 = (10000/(349.23/2));
const float G_4 = (10000/(392.00/2));
const float A_4 = (10000/(440.00/2));
const float B_4 = (10000/(493.88/2));
const float C_5 = (10000/(523.25/2));


volatile int counter = 0;

void setup(){
  //set digital pins 0-7 as outputs
  for (int i=0;i<8;i++){
    pinMode(i,OUTPUT);
  }
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  cli();//disable interrupts
  
  //set timer0 to interrupt at specified frequency, setting pitch of note.
  TCCR0A = 0;// set entire TCCR0A register to 0
  TCCR0B = 0;// same for TCCR0B
  TCNT0  = 0;//initialize counter value to 0
  // set compare match register for 40khz increments
  OCR0A = G_4;// = (16*10^6)/ (40000*8) - 1 (must be <256)
  // turn on CTC mode
  TCCR0A |= (1 << WGM01);
  // Set CS11 bit for 8 prescaler
  TCCR0B |= (1 << CS11); 
  // enable timer compare interrupt
  TIMSK0 |= (1 << OCIE0A);
  sei();//enable interrupts

  //set timer1 interrupt at 1Hz to set metronome for song
  TCCR1A = 0;// set entire TCCR1A register to 0
  TCCR1B = 0;// same for TCCR1B
  TCNT1  = 0;//initialize counter value to 0
  // set compare match register for 1hz increments
  OCR1A = 15624/8;// = (16*10^6) / (.125*1024) - 1 (must be <65536) 
  // turn on CTC mode
  TCCR1B |= (1 << WGM12);
  // Set CS12 and CS10 bits for 1024 prescaler
  TCCR1B |= (1 << CS12) | (1 << CS10); 
  // enable timer compare interrupt
  TIMSK1 |= (1 << OCIE1A);
}


ISR(TIMER0_COMPA_vect){ //40kHz interrupt routine
  if (no_notes < 0)
  {
    PORTD = 0;
    t=0;
  }
  else
  {
    PORTD = sine[t];//send sine wave to DAC, centered around (127/255)*5 = 2.5V
    t++;//increment t
    if (t > 99){//reset t to zero
      t = 0;
    }
  }
  
}

ISR(TIMER1_COMPA_vect){ //40kHz interrupt routine
  counter++;
}

unsigned long volatile prev = 0;

// duration in eigths of a second
void play(int note, int duration)
{
  if (note == 0)
  {
    no_notes = -1;
  }
  counter = 0;
  OCR0A = note;
  while (counter < duration){
  }
  no_notes = 0;
}

void loop(){
  /*play(D_4, 1);
  play(E_4, 2);
  play(E_4, 2);
  play(E_4, 2);
  play(E_4, 1);
  play(E_4, 1);
  play(E_4, 1);
  play(D_4, 1);
  play(C_4, 1);
  play(C_4, 1);
  play(E_4, 2);
  play(C_4, 1);
  play(C_4, 1);

  play(D_4, 1);
  play(D_4, 6);
  play(D_4, 1);
  play(C_4, 1);
  play(B_3, 1);
  play(A_3, 1);
  play(A_3, 1); */

  play(E_4, 1);
  play(E_4, 1);
  play(X, 1);
  play(E_4, 1);
  play(X, 1);
  play(C_4, 1);
  play(E_4, 1);
  play(X, 1);
  play(G_4, 1);
  play(X, 1);
  play(X, 1);
  play(X, 1);
  play(G_3, 1);
  play(X, 1);
  play(X, 1);
  play(X, 1);

  play(C_4, 1);
  play(X, 1);
  play(X, 1);
  play(G_4, 1);
  play(X, 1);
  play(X, 1);
  play(E_3, 1);
  play(X, 1);
  play(X, 1);
  play(A_3, 1);
  play(X, 1);
  play(B_3, 1);
  play(X, 1);
  play(A_3, 1);
  play(A_3, 1);  

  play(G_3, 1);
  play(E_4, 1);
  play(G_4, 1);
  play(A_4, 1);
  play(X, 1);
  play(F_4, 1);
  play(G_4, 1);
  play(X, 1);
  play(E_4, 1);
  play(X, 1);
  play(C_4, 1);
  play(D_4, 1);
  play(B_3, 1);
  play(X, 1);
  play(X, 1);

  play(C_4, 1);
  play(X, 1);
  play(X, 1);
  play(G_3, 1);
  play(X, 1);
  play(X, 1);
  play(E_3, 1);
  play(X, 1);
  play(X, 1);
  play(A_3, 1);
  play(X, 1);
  play(B_3, 1);
  play(X, 1);
  play(A_3, 1);
  play(A_3, 1);
  play(X, 1);

  play(G_3, 1);
  play(E_4, 1);
  play(G_4, 1);
  play(A_4, 1);
  play(X, 1);
  play(F_4, 1);
  play(G_4, 1);
  play(X, 1);
  play(E_4, 1);
  play(X, 1);
  play(C_4, 1);
  play(D_4, 1);
  play(B_3, 1);
  play(X, 1);
  play(X, 1); 
}

