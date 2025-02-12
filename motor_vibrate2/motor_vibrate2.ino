int MOTOR1 = 11;
int MOTOR2 = 10;
int v1 = 0;
int v2 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)
}

void loop() {
  // put your main code here, to run repeatedly:
  while (v1 < 255) {
    v1 = v1 + 15;
    analogWrite(MOTOR1, v1)
    delay(10000);
    analogWrite(MOTOR1, 0);
    delay(1000);
    Serial.print(v1);
  }
  while (v2 < 255) {
    v2 = v2 + 30;
    analogWrite(MOTOR1, v2)
    delay(10000);
    analogWrite(MOTOR1, 0);
    delay(1000);
    Serial.print(v2);
  }
}