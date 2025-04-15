// Project 7: Part 2.3 Part 2

// The purpose of this part was to interface with the APDS-9960 sensor. 
// The sensor was used to read ambient light, RGB color data, and proximity values. 
// The results were printed to the serial monitor for monitoring and debugging.

// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 4/9/2025  
// Code written by: Both team members
#include <Wire.h>
#include <SparkFun_APDS9960.h>
SparkFun_APDS9960 apds = SparkFun_APDS9960();

void setup() {
  Serial.begin(9600);
  Serial.println("APDS-9960 test");

  // Initialize APDS9960
  if (apds.init()) {
    Serial.println("APDS9960 initialization complete");
  } 
  else {
    Serial.println("APDS9960 initialization failed");
  }

  // Enable proximity, ambient light, and color sensing
  if (apds.enableLightSensor(true)) {
    Serial.println("Light sensor enabled");
  } 
  else {
    Serial.println("Failed to enable light sensor");
  }

  if (apds.enableProximitySensor(true)) {
    Serial.println("Proximity sensor enabled");
  } 
  else {
    Serial.println("Failed to enable proximity sensor");
  }

  delay(500); // Allow sensors to warm up
  }


void loop() {
  uint16_t ambientLight, red, green, blue;
  uint8_t proximity;

  // Read light values
  if (apds.readAmbientLight(ambientLight) && apds.readRedLight(red) && apds.readGreenLight(green) && apds.readBlueLight(blue)) {
    Serial.print("Ambient: "); Serial.print(ambientLight);
    Serial.print(" R: "); Serial.print(red);
    Serial.print(" G: "); Serial.print(green);
    Serial.print(" B: "); Serial.println(blue);
  }

  // Read proximity value
  if (apds.readProximity(proximity)) {
    Serial.print("Proximity: ");
    Serial.println(proximity);
  }
  
  delay(500); // Delay between reads
}
