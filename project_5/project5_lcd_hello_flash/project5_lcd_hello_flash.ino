// Project 5: Hello World Flash

// The purpose of this project was to create a design to print 'hello world!' to the lcd but also make it flash

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

// include lcd header file
#include <LiquidCrystal.h>

// define lcd pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// begin the lcd
void setup() {
  lcd.begin(16, 2);
}

// repeatedly print hello world and clear the lcd display every half second
void loop() {
  lcd.print("hello, world!");
  delay(500);
  lcd.clear();
  delay(500);
}
