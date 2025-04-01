// Project 6: Part 4.a.II "Hello Analog"

// The purpose of this project was to read the analog value from a potentiometer 
// and display it on the serial monitor.

// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 3/31/2025  
// Code written by: Both team members  

#include <Adafruit_CircuitPlayground.h>

uint16_t value; //store potentiometer reading

///////////////////////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

///////////////////////////////////////////////////////////////////////////////
void loop() {
  value = analogRead(3); //reading input from potentiometer
  Serial.println(value); //print value
  delay(500); //wait 500ms
}
