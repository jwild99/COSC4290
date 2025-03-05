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
