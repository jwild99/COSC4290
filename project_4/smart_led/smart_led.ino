// Project 4: Custom Design

// The purpose of this project was to create a custom design using a light sensor, FSR sensor, 
// potentiometer, LED, motor, and buzzer. We decided to make a design where the user is meant to practice their grip strength with the FSR.
// If the light sensor detects it is night time and the user is asleep, it vibrates the motor and flashes the light to wake them up. When the FSR sensor
// detects the user is applying pressure, it tones the buzzer. The pitch of the buzzer may also be adjusted using the potentiometer.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/4/2025
// Code written by: Both team members 


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
