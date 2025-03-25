// Project 5: Chars

// The purpose of this project was to create a design to read create a custom character and print it out to the LCD display

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

// import lcd header file
#include <LiquidCrystal.h>

// define lcd pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// define custom character
byte customChar[8] = {
	0b00110,
	0b01001,
	0b01001,
	0b00110,
	0b00000,
	0b00000,
	0b00000,
	0b00000
};

void setup() {
  // create the character, set up the dimensions of the screen, and the print the custom character to the screen
  lcd.createChar(0, customChar);
  lcd.begin(16, 2);
  lcd.write((uint8_t)0);
}

void loop() {
}
