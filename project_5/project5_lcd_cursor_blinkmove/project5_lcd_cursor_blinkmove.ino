// Project 5: Cursor Blink and Move

// The purpose of this project was to make the cursor blink, but on the line below where hello world is printed out

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

// include lcd header file
#include <LiquidCrystal.h>

// define lcd pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// set cursor to start and print hello world
void setup() {
  lcd.begin(16, 2);
  lcd.print("hello, world!");
}

// move cursor and make it blink every half second
void loop() {
  lcd.setCursor(12, 1);
  lcd.cursor();
  delay(500);
  lcd.setCursor(12, 1);
  lcd.noCursor();
  delay(500);
}