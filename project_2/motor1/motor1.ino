// Project 2, Part 2: Basic Motor Desgin. The purpose of this project was to get a motor to vibrate every 1 second before
// turning off again.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/11/2025
// Code written by: Both team members

int MOTOR = 11;   // Pin number for the motor- made sure it was an analog pin

void setup() {
  // Initialize pin's mode to OUTPUT
  pinMode(MOTOR, OUTPUT);

}

void loop() {
  // Make motor vibrate by writing a high value, then decrease to a low value after a half second. 
  // Alternate HIGH, LOW with a pause of 1 second in between
  digitalWrite(MOTOR, HIGH);
  delay(500);
  digitalWrite(MOTOR, LOW);
  delay(1000);

}
