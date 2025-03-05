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
