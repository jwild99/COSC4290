// Project 5: Hello World

// The purpose of this project was to create a design to print 'hello world!' to the lcd display

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

// include the lcd header file
#include <LiquidCrystal.h>

// define lcd pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// begin lcd and print hello world
void setup() {
  lcd.begin(16, 2);
  lcd.print("hello, world!");
}

void loop() {
}
