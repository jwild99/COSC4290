// Project 5: ABC Scroll

// The purpose of this project was to create a design to write 'ABC' to the LCD display and have that scroll across the
// screen

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

// import the lcd header file
#include <LiquidCrystal.h>

// define the pins of the lcd
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // begin the lcd
  lcd.begin(16, 2);
}

void loop() {
  // set the cursor to 0,0 then begin the autoscroll and print 'ABC'
  lcd.setCursor(0, 0);
  lcd.autoscroll();
  lcd.print("ABC");
  delay(500);
}
