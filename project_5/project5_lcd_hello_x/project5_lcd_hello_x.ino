// Project 5: Hello World with Xs in it

// The purpose of this project was to create a design to print hello world but replace the first 3 letters with Xs

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

// include lcd header file
#include <LiquidCrystal.h>

// define lcd pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// setup display and print hello world
void setup() {
  lcd.begin(16, 2);
  lcd.print("hello, world!");
}

// replace first 3 letters with Xs
void loop() {
  lcd.home();
  lcd.print("XXX");
}