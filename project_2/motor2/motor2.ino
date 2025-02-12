// Project 2, Part 2: Two-Motor Design. The purpose of this project was to get two different motors to vibrate at the same
// time, but at differnt intensities.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/11/2025
// Code written by: Both team members

int MOTOR1 = 11;   // Pin number for motor 1
int MOTOR2 = 10;   // Pin number for motor 2

void setup() {
  // Initialize the pins of both motors to OUTPUT mode
  pinMode(MOTOR1, OUTPUT);
  pinMode(MOTOR2, OUTPUT);

}

void loop() {
  // Vibrate motor 1 at full intensity and motor 2 at half intensity
  analogWrite(MOTOR1, 255);
  analogWrite(MOTOR2, 128);
  // Vibrate for a half second before turning off
  delay(500);
  analogWrite(MOTOR1, 0);
  analogWrite(MOTOR2, 0);
  // Delay 1 second before vibrating again
  delay(1000);
}
