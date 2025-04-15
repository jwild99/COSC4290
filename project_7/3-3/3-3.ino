// Project 7: Part 3.3

// The purpose of this part was to control the brightness of an LED using Bluetooth commands. 
// A value of '0' received via the serial port dims the LED, while a value of '1' brightens it. 
// The serial monitor is used to confirm the LED's current state.
//
// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 4/14/2025  
// Code written by: Both team members 

const int ledPin= 9; //LED Pin
int state = 0; //Storing incoming command

void setup() {
  pinMode(ledPin, OUTPUT);
  analogWrite(ledPin, 0);
  Serial.begin(38400); // Default communication rate of the Bluetooth module
}

void loop() {
  if(Serial.available() > 0){ // Checks whether data is coming from the serial port
    state = Serial.read();
  }
// Dimming the light
  if (state == '0') { 
    analogWrite(ledPin, 50);
    Serial.println("LED: DIM");
  } 
  // Brighten the light
  else if (state == '1') {
    analogWrite(ledPin, 255);
    Serial.println("LED: BRIGHT");
  }
}
