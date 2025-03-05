// Project 4: Custom Design

// The purpose of this project was to create a custom design using a light sensor, FSR sensor, 
// potentiometer, LED, motor, and buzzer. We decided to make a design where the user is meant to practice their grip strength with the FSR.
// If the light sensor detects it is night time and the user is asleep, it vibrates the motor and flashes the light to wake them up. When the FSR sensor
// detects the user is applying pressure, it tones the buzzer. The pitch of the buzzer may also be adjusted using the potentiometer.

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
    Serial.println("Light on");
    Serial.print("Sensor Value: ");
    Serial.println(analogValue);
  }
  else{
    digitalWrite(LED_PIN, LOW); // turn off LED
    Serial.println("Light off");
    Serial.print("Sensor Value: ");
    Serial.println(analogValue);
  }
  //Delay of 1000ms before checking light level again
  delay(1000);
}
