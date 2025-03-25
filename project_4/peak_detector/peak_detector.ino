// Project 4: Custom Design

// The purpose of this project was to create a design which detects if a new peak has been found within the readings from either a light sensor or
// an FSR sensor. A threshold value is used to ensure that a new peak is only achieved if the sensor reading drops below the threshold. This ensures
// that a peak is actually a peak and not just a high point in the data.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/4/2025
// Code written by: Both team members 


#include <stdio.h>

// initial peak value
int peakValue = 0;
// threshold value
int threshold = 250;   

void setup() {
  // set up serial input
  Serial.begin(9600);
}

void loop() {
  //read sensor on pin A0:
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);

  // check if it's higher than the current peak:
  if (sensorValue > peakValue) {
    peakValue = sensorValue;
  }

  // if sensor drops below threshold again, we have a new peak
  if (sensorValue <= threshold) {
    if (peakValue > threshold) {
      // you have a peak value:
      Serial.println("NEW PEAK");
      Serial.println(peakValue);
      // reset the peak variable:
      peakValue = 0;
    }
  }
  delay(1000);
}
