#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sensorPin = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("hello, world!");
}

void loop() {
  int reading = analogRead(sensorPin);
  float voltage = reading * 5.0;
  voltage /= 1024.0; // map input voltages between 0 and 1023
  float temperatureC = (voltage - 0.5) * 100 ;
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  lcd.clear();
  lcd.print("C: ");
  lcd.print(temperatureC);
  lcd.setCursor(0, 1);
  lcd.print("F: ");
  lcd.print(temperatureF);
  lcd.setCursor(0, 0);
  delay(1000);
}
