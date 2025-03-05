// Project 4: Custom Design

// The purpose of this project was to create a custom design using a light sensor, FSR sensor, 
// potentiometer, LED, motor, and buzzer. We decided to make a design where the user is meant to practice their grip strength with the FSR.
// If the light sensor detects it is night time and the user is asleep, it vibrates the motor and flashes the light to wake them up. When the FSR sensor
// detects the user is applying pressure, it tones the buzzer. The pitch of the buzzer may also be adjusted using the potentiometer.

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
