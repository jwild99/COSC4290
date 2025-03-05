// Project 4: Custom Design

// The purpose of this project was to create a custom design using a light sensor, FSR sensor, 
// potentiometer, LED, motor, and buzzer. We decided to make a design where the user is meant to practice their grip strength with the FSR.
// If the light sensor detects it is night time and the user is asleep, it vibrates the motor and flashes the light to wake them up. When the FSR sensor
// detects the user is applying pressure, it tones the buzzer. The pitch of the buzzer may also be adjusted using the potentiometer.

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
