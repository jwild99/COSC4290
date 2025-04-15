// Project 7: Part 3.1

// The purpose of this part was to set up serial communication between the Arduino 
// and an HC-05 Bluetooth module. This allowed wireless data transmission using the 
// serial monitor. The code supports two-way communication between the Arduino and 
// any Bluetooth-enabled device.
//
// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 4/14/2025  
// Code written by: Both team members 

// Basic Bluetooth sketch HC-05_02_38400
// Connect the HC-05 module and communicate using the serial monitor
//
// The HC-05 defaults to communication mode when first powered on.
// Needs to be placed in to AT mode
// After a factory reset the default baud rate for communication mode is 38400
//
// Pins
// BT VCC to Arduino 5V out.
// BT GND to GND
// BT RX to Arduino pin 3 (through a voltage divider)
// BT TX to Arduino pin 2 (no need voltage divider)
//

#include <SoftwareSerial.h>
SoftwareSerial BTserial(2, 3); // RX | TX

// Connect the HC-05 TX to Arduino pin 2 RX.
// Connect the HC-05 RX to Arduino pin 3 TX through a voltage divider.

char c = ' ';
void setup()
{
  // start th serial communication with the host computer
  Serial.begin(9600);
  Serial.println("Arduino with HC-05 is ready");

  // start communication with the HC-05 using 38400
  BTserial.begin(38400);
  Serial.println("BTserial started at 38400");
  }

void loop()
{
  // Keep reading from HC-05 and send to Arduino Serial Monitor
  if (BTserial.available())
  {
    c = BTserial.read();
    Serial.write(c);
  }

  // Keep reading from Arduino Serial Monitor and send to HC-05
  if (Serial.available())
  {
    c = Serial.read();
    // mirror the commands back to the serial monitor
    // makes it easy to follow the commands
    Serial.write(c);
    BTserial.write(c);
  }
}
