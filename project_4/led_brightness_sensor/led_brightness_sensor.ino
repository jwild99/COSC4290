// Project 4: LED brightness sensor design

// The purpose of this project was to create a design to adjust the brightness of an LED based on the brightness reading  from the light sensor.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/4/2025
// Code written by: Both team members 


const int LIGHT_SENSOR_PIN = A0; // light sensor's pin
const int LED_PIN = 11; // LED's pin

// threshold for altering LED brightness
const int ANALOG_THRESHOLD = 500;


// variables will change:
// variable to read light sensor
int analogValue;
// variable to adjust LED brightness
int LedBrightness;


void setup() {
  pinMode(LED_PIN, OUTPUT); // set arduino pin to output mode
  Serial.begin(9600);
}
void loop() {
  analogValue = analogRead(LIGHT_SENSOR_PIN); // read the input on analog pin
  LedBrightness= map(analogValue, 0, 1023, 0, 255); // map analog reading to led output value

  // write to led and serial
  analogWrite(LED_PIN, LedBrightness);
  Serial.print("Sensor Value: ");
  Serial.println(analogValue);
  //Delay of 1000ms before checking light level again
  delay(1000);
}
