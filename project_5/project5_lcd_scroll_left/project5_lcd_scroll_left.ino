// Project 5: Hello World Screen Scroll Left

// The purpose of this project was to create a design to print 'hello world!' to the lcd display and then scroll the 
// screen to the left

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

// include lcd header file
#include <LiquidCrystal.h>

// define lcd pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// begin the lcd and print hello world
void setup() {
  lcd.begin(16, 2);
  lcd.print("hello, world!");
}

// scroll the screen to the left every second
void loop() {
  lcd.scrollDisplayLeft();
  delay(1000);
}
