// Project 6: Part 4.a.I "Hello Analog"
//
// The purpose of this project was to show the basic sound output using the Circuit Playground's built-in speaker. 
//
// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 3/31/2025  
// Code written by: Both team members 

#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
}

void loop() {
  CircuitPlayground.playTone(500, 100); //play tone
  delay(1000); //wait 1 second
}
