// Project 2, Part 3: Simple buzzer circuit. The purpose of this project was to create a program which turns on and off
// a buzzer every second. This buzzer makes a beeping noise when turned on.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/11/2025
// Code written by: Both team members

const int buzzer = 9;   // Pin number of the buzzer

void setup() {
  // Initialize the buzzer pin to OUTPUT mode
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // Send a tone signal to the buzzer for 1 second then turn it back off again. One second between altering of buzzer state
  tone(buzzer, 1000);
  delay(1000);
  noTone(buzzer);
  delay(1000);
}
