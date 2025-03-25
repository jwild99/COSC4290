// Project 5: Cursor Blink

// The purpose of this project was to display the cursor on screen and have it blink

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

// include lcd header file
#include <LiquidCrystal.h>

// define lcd pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// set up dimensions of lcd and print 'hello world!'
void setup() {
  lcd.begin(16, 2);
  lcd.print("hello, world!");
}

// make the cursor flash every half second
void loop() {
  lcd.cursor();
  delay(500);
  lcd.noCursor();
  delay(500);
}
