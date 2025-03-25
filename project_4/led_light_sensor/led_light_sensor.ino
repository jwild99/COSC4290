// Project 4: LED light sensor

// The purpose of this project was to create a design which turns on and off an LED based on the input reading from a light sensor.
// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/4/2025
// Code written by: Both team members 


// constants won't change
const int LIGHT_SENSOR_PIN = A0; //light sensor's pin
const int LED_PIN = 13; //LED's pin
const int ANALOG_THRESHOLD = 500;

// variables will change:
int analogValue;

void setup() {
  pinMode(LED_PIN, OUTPUT); // set arduino pin to output mode
  Serial.begin(9600);
}

void loop() {
  //read the input on analog pin
  analogValue = analogRead(LIGHT_SENSOR_PIN);
  
  //compare analog value with the threshold
  if(analogValue < ANALOG_THRESHOLD){
    digitalWrite(LED_PIN, HIGH); // turn on LED
    // print values
    Serial.println("Light on");
    Serial.print("Sensor Value: ");
    Serial.println(analogValue);
  }
  else{
    digitalWrite(LED_PIN, LOW); // turn off LED

    // print values
    Serial.println("Light off");
    Serial.print("Sensor Value: ");
    Serial.println(analogValue);
  }
  //Delay of 1000ms before checking light level again
  delay(1000);
}
