// Project 7: Part 2.3

// The purpose of this part was to test the function of the APDS-9960 sensor and print whether or not it's working to the serial monitor.

// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 4/9/2025  
// Code written by: Both team members 

#include <Arduino_APDS9960.h>

void setup() {
  Serial.begin(9600);
  // wait for Serial Monitor to open:
  while (!Serial);
  // if the sensor doesn't initialize, let the user know:
  if (!APDS.begin()) {
    Serial.println("APDS9960 sensor not working. Check your wiring.");
    // stop the sketch:
    while (true);
  }
  Serial.println("Sensor is working");
}

void loop() {
  // red, green, blue, clear channels:
  int r, g, b, c;
  // if the sensor has a reading:
  if (APDS.colorAvailable()) {
    // read the color
    APDS.readColor(r, g, b, c);
    // print the values
    Serial.print(r);
    Serial.print(",");
    Serial.print(g);
    Serial.print(",");
    Serial.print(b);
    Serial.print(",");
    Serial.println(c);
  }
}
