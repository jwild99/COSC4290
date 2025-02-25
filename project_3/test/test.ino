// Project 3: Simple test design. 

// Wanted to test functionatlity of arduino nano board by testing a simple blinking
// light. This code could be modified to try various pins on the board, or the built in LEDs on the board itself.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/24/2025
// Code written by: Both team members

// define the pin on the arduino nano we will use for the design.
int led = 11;

void setup() {
  // set up pin mode to OUTPUT mode.
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);  // turn the LED on 
  delay(1000);              // wait for a second
  digitalWrite(led, LOW);   // turn the LED off 
  delay(1000);              // wait another second
}
