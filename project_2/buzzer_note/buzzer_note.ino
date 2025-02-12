// Project 2, Part 3: Buzzer Note. The purpose of this project was to create a program which turns on and off
// a buzzer every second, but this time make the buzzer create a certain note sound.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/11/2025
// Code written by: Both team members

const int buzzer = 9;     // Pin number of buzzer
const int c_note = 261;   // Value of buzzer pitch

void setup() {
  // Initialize buzzer pin to OUTPUT mode
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // Send the specific note signal to buzzer, wait 1 second, then turn buzzer off again. 
  // Wait 1 second between altering buzzer states
  tone(buzzer, c_note);
  delay(1000);
  noTone(buzzer);
  delay(1000);
}
