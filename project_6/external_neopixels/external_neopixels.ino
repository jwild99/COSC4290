// Project 6: Part 3 "External NeoPixels"

// The purpose of this project was to control both the onboard NeoPixels and an external NeoPixel strip 
// using the Circuit Playground Express.

// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 3/31/2025  
// Code written by: Both team members  


#include <Adafruit_CircuitPlayground.h>
// do NOT include the standard NeoPixel library
//controls NeoPixel strip
#define NEOPIX_PIN    A2 
//Number of pixels in strip
#define NUM_PIXELS    5

// use Adafruit_CPlay_NeoPixel to create a separate external NeoPixel strip
Adafruit_CPlay_NeoPixel strip = Adafruit_CPlay_NeoPixel(NUM_PIXELS, NEOPIX_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // initialize the Circuit Playground as usual
  // this will initialize the onboard NeoPixels as well
  CircuitPlayground.begin();

  // initialize external NeoPixel strip separately
  strip.begin();
}

void loop() {
  // for the on board NeoPixels, use the CircuitPlayground functions
  CircuitPlayground.clearPixels();
  
  // for the external NeoPixels, must use the Adafruit_CPlay_NeoPixel functions directly
  strip.clear(); //clear external NeoPixels
  strip.show(); //clears external strip

  delay(500); //wait 500ms

  CircuitPlayground.setPixelColor(0, 255,   0,   0); //Red
  CircuitPlayground.setPixelColor(1, 128, 128,   0); //Olive
  CircuitPlayground.setPixelColor(2,   0, 255,   0); //Green
  CircuitPlayground.setPixelColor(3,   0, 128, 128); //Teal
  CircuitPlayground.setPixelColor(4,   0,   0, 255); //Blue
  
  CircuitPlayground.setPixelColor(5, 0xFF0000); //Red
  CircuitPlayground.setPixelColor(6, 0x808000); //Olive
  CircuitPlayground.setPixelColor(7, 0x00FF00); //Green
  CircuitPlayground.setPixelColor(8, 0x008080); //Teal
  CircuitPlayground.setPixelColor(9, 0x0000FF); //Blue

  // some functions are the same
  strip.setPixelColor(0, 255,   0,   0); //Red
  strip.setPixelColor(1, 128, 128,   0); //Olive
  strip.setPixelColor(2,   0, 255,   0); //Green
  strip.setPixelColor(3,   0, 128, 128); //Teal
  strip.setPixelColor(4,   0,   0, 255); //Blue
  
  // but for the external strip, must call show()
  strip.show();

  delay(5000); //wait 5 seconds
}
