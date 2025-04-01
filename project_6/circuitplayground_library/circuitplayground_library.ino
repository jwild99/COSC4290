// Project 6: Part 4.b.I "The Circuit Playground Library"

// The purpose of this project was to use the left and right buttons on the Circuit Playground 
// to trigger two different tones. 

// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 3/31/2025  
// Code written by: Both team members  

#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
}
 
void loop() {
  if(CircuitPlayground.leftButton()) {   // if reading the left button returns true
    CircuitPlayground.playTone(440,100);    // output a 440 Hz sound for a tenth of a second
  }
  else if(CircuitPlayground.rightButton()) { // if reading the right button returns true
    CircuitPlayground.playTone(1760,100);   // output a 1760 Hz sound for a tenth of a second                    
  }
}
