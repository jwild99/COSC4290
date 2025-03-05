// Project 4: FSR Design

// The purpose of this project was to create a custom design using a light sensor, FSR sensor, 
// potentiometer, LED, motor, and buzzer.  

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/4/2025
// Code written by: Both team members 



int sensorState;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // read the sensor
  sensorState = analogRead(A0);
  Serial.println(sensorState);
  // delay by 1s between readings
  delay(1000);
}
