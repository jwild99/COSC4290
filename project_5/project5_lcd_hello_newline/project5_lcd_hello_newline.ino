// Project 5: Hello World New Line

// The purpose of this project was to create a design to print hello world but on the bottom line instead of the top line

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

// include lcd header file
#include <LiquidCrystal.h>

// define lcd pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// move cursor down a line and print hello world
void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(2, 1);
  lcd.print("hello, world!");
}

void loop() {
}
