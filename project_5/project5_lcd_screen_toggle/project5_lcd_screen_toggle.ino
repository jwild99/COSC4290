// Project 5: Screen Toggle

// The purpose of this project was to create a design to toggle the screen on and off

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

// include lcd header file
#include <LiquidCrystal.h>

// define lcd pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// begin lcd and print hello world
void setup() {
  lcd.begin(16, 2);
  lcd.print("hello, world!");
}

// toggle lcd display on and off every half second effectively flashing the hello world text
void loop() {
  lcd.display();
  delay(500);
  lcd.noDisplay();
  delay(500);
}