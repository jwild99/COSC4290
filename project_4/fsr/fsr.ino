// Project 4: FSR Design

// The purpose of this project was to create a design to showcase the FSR sensor. It simply reads the sensor every second and prints the reading to the serial console

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/4/2025
// Code written by: Both team members 


// reading of sensor
int sensorState;

void setup() {
  // set up serial 
  Serial.begin(9600);
}

void loop() {
  // read the sensor
  sensorState = analogRead(A0);
  Serial.println(sensorState);
  // delay by 1s between readings
  delay(1000);
}
