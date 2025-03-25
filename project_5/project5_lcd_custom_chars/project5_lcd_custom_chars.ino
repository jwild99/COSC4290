// Project 5: Custom Chars

// This was our custom design where we printed out our names to the LCD display one on the top line and the other on the
// bottom line

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

// include lcd header file
#include <LiquidCrystal.h>

// define lcd pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// print first name at start and then move cursor below and print the second name on the bottom line
void setup() {
  lcd.begin(16, 2);
  lcd.write("Dayne");
  lcd.setCursor(0, 1);
  lcd.write("Josh");
}

// loop is not used here as the design just prints out the names
void loop() {
}
