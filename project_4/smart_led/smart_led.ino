const int LIGHT_SENSOR_PIN = A0; // light sensor's pin
const int LED_BRIGHTNESS_PIN = 11; // LED's pin

const int FSR_PIN = A1;
const int FSR_LED_PIN = 10;

const int PRESSURE_THRESHOLD = 0;

int ledBrightness = 125;
const int DARKNESS_THRESHOLD = 100;

// variables will change:
int pressureValue;

void setup() {
  pinMode(LED_BRIGHTNESS_PIN, OUTPUT); // set arduino pin to output mode
  pinMode(FSR_LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pressureValue = analogRead(FSR_PIN);
  Serial.println(pressureValue);
  if (pressureValue > PRESSURE_THRESHOLD) {
    analogWrite(FSR_LED_PIN, 254);
    delay(10000 / (pressureValue));
    analogWrite(FSR_LED_PIN, 0);
    delay(10000 / (pressureValue));
  }
  else {
    while (ledBrightness <= 230 && (analogRead(LIGHT_SENSOR_PIN) < DARKNESS_THRESHOLD)) {
      ledBrightness = ledBrightness + 25;
      analogWrite(LED_BRIGHTNESS_PIN, ledBrightness);
      delay(500);
    }
    while (ledBrightness >= 50 && (analogRead(LIGHT_SENSOR_PIN) > DARKNESS_THRESHOLD)) {
      ledBrightness = ledBrightness - 25;
      analogWrite(LED_BRIGHTNESS_PIN, ledBrightness);
      delay(500);
    }
  }
  delay(250);
}
