// Project 6: Part 4.a.IV "Speaker Fun"

// The purpose of this project was to use the potentiometer to control the frequency
// of the tone played by the speaker 

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/31/2025
// Code written by: Both team members 


#include <Adafruit_CircuitPlayground.h>

uint16_t value; //input value from potentiometer
uint16_t freq; //frequency value

///////////////////////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

///////////////////////////////////////////////////////////////////////////////
void loop() {
  value = analogRead(3); //input reading from potentiemeter 
  freq = map(value, 0, 1023, 100, 10000); //mapping potentiometer range to a frequency

  CircuitPlayground.playTone(freq, 100, false); //playing the mapped frequency 
}
