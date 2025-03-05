// Project 4: Custom Design

// The purpose of this project was to create a smart led design which adjusts the brightness based on the ambient light level of the 
// environment. It also uses an FSR sensor to create a sort of alert flashing light that blinks faster as the pressue on the FSR increases.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/4/2025
// Code written by: Both team members 


const int LIGHT_SENSOR_PIN = A0; // light sensor's pin
const int LED_BRIGHTNESS_PIN = 11; // LED's pin

// FSR sensor and corresponding LED pin
const int FSR_PIN = A1;
const int FSR_LED_PIN = 10;

// pressure threshold to start blinking the FSR LED
const int PRESSURE_THRESHOLD = 0;

// beginning LED brightness 
int ledBrightness = 125;

// threshold for when the LED should dim or brighten
const int DARKNESS_THRESHOLD = 100;

// value read by pressure sensor
int pressureValue;

void setup() {
  // set LED pin modes to output and open Serial connection
  pinMode(LED_BRIGHTNESS_PIN, OUTPUT); 
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
