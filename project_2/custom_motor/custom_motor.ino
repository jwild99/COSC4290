// Project 2, Part 2: Custom Motor Design. The purpose of this project was to make a custom motor design. We chose to make
// two motors vibrate at alternating rates really quickly. This made a sound similar to a siren.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/11/2025
// Code written by: Both team members

int motor1 = 10;  // Pin number of motor 1
int motor2 = 11;  // Pin number of motor 2


void setup() {
  // Initialize both motors to OUTPUT mode
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
}

void loop() {
  // Write 255 to motor 1 (full intensity) and 128 to motor 2 (half intensity)
  analogWrite(motor1, 255);
  analogWrite(motor2, 128);
  // delay 300ms in between vibrations
  delay(300);
  // Now write 128 to motor 1 and 255 to motor 2
  analogWrite(motor1, 128);
  analogWrite(motor2, 255);
  // Delay another 300ms
  delay(300);
}
