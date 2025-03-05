const int LIGHT_SENSOR_PIN = A0; // light sensor's pin
const int LED_PIN = 11; // LED's pin
int LedBrightness;
const int ANALOG_THRESHOLD = 500;
// variables will change:
int analogValue;
void setup() {
  pinMode(LED_PIN, OUTPUT); // set arduino pin to output mode
  Serial.begin(9600);
}
void loop() {
  analogValue = analogRead(LIGHT_SENSOR_PIN); // read the input on analog pin
  LedBrightness= map(analogValue, 0, 1023, 0, 255);
  analogWrite(LED_PIN, LedBrightness);
  Serial.print("Sensor Value: ");
  Serial.println(analogValue);
  //Delay of 1000ms before checking light level again
  delay(1000);
}