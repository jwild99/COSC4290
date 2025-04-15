// Project 7: Part 1.2 

// The purpose of this part was to read in the analog data being input from the potentiometer. 
// This data would then be printed to the serial monitor

// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 4/9/2025  
// Code written by: Both team members 

void setup() {
  Serial.begin(9600);
}
void loop() {
  int analogValue = analogRead(A0)/4; // read the sensor value
  Serial.write(analogValue); // send the value serially as a binary value
} 
