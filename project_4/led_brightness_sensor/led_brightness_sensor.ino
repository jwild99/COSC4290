// Project 4: Custom Design

// The purpose of this project was to create a custom design using a light sensor, FSR sensor, 
// potentiometer, LED, motor, and buzzer.  

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/4/2025
// Code written by: Both team members 



const int LIGHT_SENSOR_PIN = A0; // light sensor's pin
const int LED_PIN = 11; // LED's pin
int LedBrightness;
const int ANALOG_THRESHOLD = 500;
// variables will change:
int analogValue;
void setup() {
  pinMode(LED_PIN, OUTPUT); // set arduino pin to output mode
  Serial.begin(9600);
}
void loop() {
  analogValue = analogRead(LIGHT_SENSOR_PIN); // read the input on analog pin
  LedBrightness= map(analogValue, 0, 1023, 0, 255);
  analogWrite(LED_PIN, LedBrightness);
  Serial.print("Sensor Value: ");
  Serial.println(analogValue);
  //Delay of 1000ms before checking light level again
  delay(1000);
}
