// Project 6: Part 4.a.III "Neopixel Fun"

// The purpose of this project was to use a potentiometer to control how many NeoPixels 
// light up on the Circuit Playground.

// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 3/31/2025  
// Code written by: Both team members  

#include <Adafruit_CircuitPlayground.h>

uint16_t value; //input value from potentiometer
uint8_t pixels; //determines how many pixels light up

///////////////////////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

///////////////////////////////////////////////////////////////////////////////
void loop() {
  value = analogRead(3); //reading input from potentiometer
  pixels = map(value, 0, 1023, 0, 10); //mapping value to range for number of NeoPixels

  CircuitPlayground.clearPixels(); //turning off all pixels
  for (int p=0; p<pixels; p++) { //looping through and lighting up the number of pixels
    CircuitPlayground.setPixelColor(p, 0xFF00FF);
  }
  delay(100); //wait 100ms
}
