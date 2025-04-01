// Project 6: Part 3 "Color Sense"

// The purpose of this project was to use the Circuit Playground's onboard color sensor 
// to detect RGB values from an external surface and display the color based on clicking
// the right or left button

// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 3/31/2025  
// Code written by: Both team members  

#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

void setup() {
  Serial.begin(115200);
  // Initialize Circuit Playground library.
  CircuitPlayground.begin();
  CircuitPlayground.strip.setBrightness(255);
}

void loop() {
  // Detect if the left or right button is pressed by taking two readings with
  // a small delay inbetween.  If the button changes state (like it was pressed
  // or released) then the two readings will be different.
  bool left_first = CircuitPlayground.leftButton();
  bool right_first = CircuitPlayground.rightButton();
  delay(20); //wait 20ms
  bool left_second = CircuitPlayground.leftButton();
  bool right_second = CircuitPlayground.rightButton();
  // Now check if either button was released, i.e. changed from a true (pressed)
  // state to a false (non-pressed) state.
  if ((left_first && !left_second) || (right_first && !right_second)) {
    // Button was pressed, perform a color sense.
    // First turn off all the pixels to make sure they don't interfere with the
    // reading.
    CircuitPlayground.clearPixels();
    // Now take a color reading (the red, green, blue color components will be
    // returned in the parameters passed in).
    uint8_t red, green, blue;
    CircuitPlayground.senseColor(red, green, blue);
    // Print out the color components.
    Serial.print("Color: red=");
    Serial.print(red, DEC);
    Serial.print(" green=");
    Serial.print(green, DEC);
    Serial.print(" blue=");
    Serial.println(blue, DEC);
    // Gamma correction makes LED brightness appear more linear
    red   = CircuitPlayground.gamma8(red);
    green = CircuitPlayground.gamma8(green);
    blue  = CircuitPlayground.gamma8(blue);
    // Finally set all the pixels to the detected color.
    for (int i=0; i<10; ++i) {
      CircuitPlayground.strip.setPixelColor(i, red, green, blue);
    }
    CircuitPlayground.strip.show(); //showing new colors
  }
}
