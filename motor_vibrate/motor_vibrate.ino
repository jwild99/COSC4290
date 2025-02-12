int MOTOR = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(MOTOR, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(MOTOR, HIGH);
  delay(1000);
  digitalWrite(MOTOR, LOW);
  delay(10000);

}
