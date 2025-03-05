// Project 4: Threshold Detection

// The purpose of this project was to create a design which is able to detect when the reading from either a light sensor or
// FSR sensor crosses a threshold. If it does, print out that this occurred.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/4/2025
// Code written by: Both team members 


int lastSensorState = LOW; // sensor's previous state
int threshold = 512; // an arbitrary threshold value

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the sensor:
  int sensorState = analogRead(A0);
  // if it's above the threshold:
  if (sensorState <= threshold) {
    Serial.println(sensorState);
    // check that the previous value was below the threshold:
    if (lastSensorState > threshold) {
      //print sensor state
      Serial.println(sensorState);
      // the sensor just crossed the threshold
      Serial.println("Sensor crossed the threshold");
    }
  }
  // save sensor state for next comparison:
  lastSensorState = sensorState;
  delay(1000);
}
