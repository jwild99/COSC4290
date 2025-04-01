// Project 6: Part 4.b.IV "Motion to Sound"

// The purpose of this project was to use the Circuit Playground’s built-in accelerometer to 
// detect motion and map it to sound frequencies. 

// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 3/31/2025  
// Code written by: Both team members  

#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();   // initialize the Circuit Playground library
  Serial.begin(9600);
}
 
void loop() {
   float movementX, movementY, movementZ, movement; //variables for motion detection
   uint16_t sound; //holds tone frequency 
   if(CircuitPlayground.slideSwitch()) {   // sense & play when slide whitch at "+"
      movementX = abs(CircuitPlayground.motionX());  // read the X motion (absolute value)
      movementY = abs(CircuitPlayground.motionY());  // read the Y motion (absolute value)
      movementZ = abs(CircuitPlayground.motionZ());  // read the Z motion (absolute value)
      movement = movementX + movementY + movementZ;  // aggregate the movement sensed
      Serial.println(movement);
      sound = (int) map(movement, 8.0, 60.0, 440.0, 1760.0); // map movement to music values
      CircuitPlayground.playTone(sound, 500);   //   play sound for 500 milliseconds
   }
}
