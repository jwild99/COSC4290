const int ledPin= 9;
int state = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  analogWrite(ledPin, 0);
  Serial.begin(38400); // Default communication rate of the Bluetooth module
}

void loop() {
  if(Serial.available() > 0){ // Checks whether data is coming from the serial port
    state = Serial.read();
  }

  if (state == '0') {
    analogWrite(ledPin, 50);
    Serial.println("LED: DIM");
  }
  else if (state == '1') {
    analogWrite(ledPin, 255);
    Serial.println("LED: BRIGHT");
  }
}
