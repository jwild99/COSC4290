// Project 6: Part 4.d.

// The purpose of this project was to use the Circuit Playground's accelerometer 
// to detect tilt direction and respond with a specific NeoPixel color:
//  - Left Tilt: Blue
//  - Right Tilt: Red
//  - Forward Tilt: Green
//  - Backward Tilt: Yellow
//  - Flat: White
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
  float x = CircuitPlayground.motionX(); //read x axis acceleration
  float y = CircuitPlayground.motionY(); //read y axis acceleration

  //checking tilt direction and changing color accordingly 
  if (x < -3) {
    setColor(0, 0, 255);  // Blue (Tilt Left)
  } else if (x > 3) {
    setColor(255, 0, 0);  // Red (Tilt Right)
  } else if (y < -3) {
    setColor(0, 255, 0);  // Green (Tilt Forward)
  } else if (y > 3) {
    setColor(255, 255, 0);  // Yellow (Tilt Backward)
  } else {
    setColor(255, 255, 255);  // White (Flat)
  }

  delay(100); //wait 100ms
}

//Setting all NeoPixels to a specific color
void setColor(int r, int g, int b) {
  for (int i = 0; i < 10; i++) {
    CircuitPlayground.setPixelColor(i, r, g, b);
  }
}
