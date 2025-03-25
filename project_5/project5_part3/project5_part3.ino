// Project 5: LCD Temperature Display

// The purpose of this project was to create a design to read the temperature in from a TMP36 sensor and then display 
// the temperature in F and C to the LCD display

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

// include the lcd header file
#include <LiquidCrystal.h>

// define lcd pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// define temp sensor pin
int sensorPin = 0;

// begin lcd
void setup() {
  lcd.begin(16, 2);
}

void loop() {
  // read in temperature data from sensor
  int reading = analogRead(sensorPin);
  // map voltage to a proper temperate reading in C and F
  float voltage = reading * 5.0;
  voltage /= 1024.0; // map input voltages between 0 and 1023
  float temperatureC = (voltage - 0.5) * 100 ;
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  // clear the lcd display
  lcd.clear();
  // print the temperature in C
  lcd.print("C: ");
  lcd.print(temperatureC);
  // move the cursor to the next line
  lcd.setCursor(0, 1);
  // print out the temperature in F to the lcd display
  lcd.print("F: ");
  lcd.print(temperatureF);
  lcd.setCursor(0, 0);
  // delay by 1 second
  delay(1000);
}