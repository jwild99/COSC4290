// Project 4: Custom Design

// The purpose of this project was to create a custom design using a light sensor, FSR sensor, 
// potentiometer, LED, motor, and buzzer. We decided to make a design where the user is meant to practice their grip strength with the FSR.
// If the light sensor detects it is night time and the user is asleep, it vibrates the motor and flashes the light to wake them up. When the FSR sensor
// detects the user is applying pressure, it tones the buzzer. The pitch of the buzzer may also be adjusted using the potentiometer.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/4/2025
// Code written by: Both team members 



// outputs
const int MOTOR = 9;
const int BUZZER = 10;
const int LED = 11;

// inputs
const int FSR = A1;
const int LIGHT_SENSOR = A0;
const int POTENTIOMETER = A2;

// threshold
const int LIGHT_THRESHOLD = 50;

// variables
int fsr_reading;
int buzzer_pitch; // equal to reading from potentiometer

void setup() {
  // set pins to output
  pinMode(MOTOR, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // while the light sensor indicates night time, buzz the motor and flash the light to wake up the user
  while (analogRead(LIGHT_SENSOR) < LIGHT_THRESHOLD) {
    analogWrite(MOTOR, 255);

    // flash light
    analogWrite(LED, 254);
    delay(100);
    analogWrite(LED, 0);
    delay(100);
  }

  // turn motor and light off upon light sensor indicating day time
  analogWrite(MOTOR, 0);
  analogWrite(LED, 0);

  // read pressure sensor
  fsr_reading = analogRead(FSR);

  // if pressure sensor is getting input, tone the buzzer
  if (fsr_reading > 0) {
    // buzzer pitch will be equal to the reading from the potentiometer which allows changing pitch
    buzzer_pitch = analogRead(POTENTIOMETER);
    buzzer_pitch = map(buzzer_pitch, 0, 1023, 100, 2000);
    tone(BUZZER, buzzer_pitch);
  }
  // otherwise don't tone the buzzer
  else {
    noTone(BUZZER);
  }
}
