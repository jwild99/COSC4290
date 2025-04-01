// Project 6: Part 3 "Demo"

// The purpose of this program was to test the different built-in features of the
// Circuit Playground

// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 3/31/2025  
// Code written by: Both team members  

#include <Adafruit_CircuitPlayground.h>

// we light one pixel at a time, this is our counter
uint8_t pixeln = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Circuit Playground test!");

  CircuitPlayground.begin();
}


void loop() {
  // turn off speaker when not in use
  CircuitPlayground.speaker.enable(false);

  // test Red #13 LED
  CircuitPlayground.redLED(HIGH);
  delay(100); //wait 100ms
  CircuitPlayground.redLED(LOW); //turn off Red LED

  /************* TEST CAPTOUCH */
  Serial.print("Capsense #3: "); Serial.println(CircuitPlayground.readCap(3));
  Serial.print("Capsense #2: "); Serial.println(CircuitPlayground.readCap(2));
  Serial.print("Capsense #0: "); Serial.println(CircuitPlayground.readCap(0));
  Serial.print("Capsense #1: "); Serial.println(CircuitPlayground.readCap(1));
  Serial.print("Capsense #12: "); Serial.println(CircuitPlayground.readCap(12));
  Serial.print("Capsense #6: "); Serial.println(CircuitPlayground.readCap(6));
  Serial.print("Capsense #9: "); Serial.println(CircuitPlayground.readCap(9));
  Serial.print("Capsense #10: "); Serial.println(CircuitPlayground.readCap(10));
  delay(10);

  /************* TEST SLIDE SWITCH */
  if (CircuitPlayground.slideSwitch()) {
    Serial.println("Slide to the left");
  } else {
    Serial.println("Slide to the right");
    CircuitPlayground.speaker.enable(true); //enable speaker
    CircuitPlayground.playTone(500 + pixeln * 500, 100); //playing tone
  }
  delay(10); //wait 10ms

  /************* TEST 10 NEOPIXELS */
  CircuitPlayground.setPixelColor(pixeln++, CircuitPlayground.colorWheel(25 * pixeln));
  if (pixeln == 11) { //reset after cycling through all 10 pixels
    pixeln = 0;
    CircuitPlayground.clearPixels();
  }
  delay(10);

  /************* TEST BOTH BUTTONS */
  if (CircuitPlayground.leftButton()) {
    Serial.println("Left button pressed!");
  }
  if (CircuitPlayground.rightButton()) {
    Serial.println("Right button pressed!");
  }
  delay(10);

  /************* TEST LIGHT SENSOR */
  Serial.print("Light sensor: ");
  Serial.println(CircuitPlayground.lightSensor());
  delay(10);

  /************* TEST SOUND SENSOR */
  Serial.print("Sound sensor: ");
  Serial.println(CircuitPlayground.mic.soundPressureLevel(10));
  delay(10);

  /************* TEST ACCEL */
  // Display the results (acceleration is measured in m/s*s)
  Serial.print("X: "); Serial.print(CircuitPlayground.motionX());
  Serial.print(" \tY: "); Serial.print(CircuitPlayground.motionY());
  Serial.print(" \tZ: "); Serial.print(CircuitPlayground.motionZ());
  Serial.println(" m/s^2");
  delay(10);

  /************* TEST THERMISTOR */
  Serial.print("Temperature ");
  Serial.print(CircuitPlayground.temperature());
  Serial.println(" *C");
}
