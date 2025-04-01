// Project 6: Part 4.b.II "Light to Sound"

// The purpose of this project was to use the Circuit Playground's built-in light sensor 
// to control sound frequency.

// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 3/31/2025  
// Code written by: Both team members  

#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();   // initialize the Circuit Playground library
}
 
void loop() {
   uint16_t value, sound; //variables for light sensor reading and tone frequency
   if(CircuitPlayground.slideSwitch()) {      // if the slide switch is on
     value = CircuitPlayground.lightSensor(); //   read the light sensor
     sound = map(value, 5, 1000, 131, 1760);  //   map light values to music values
     CircuitPlayground.playTone(sound, 100);  //   play sound for 100 milliseconds
   }
}
