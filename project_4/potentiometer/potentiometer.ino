// Project 4: Custom Design

// The purpose of this project was to create a custom design using a light sensor, FSR sensor, 
// potentiometer, LED, motor, and buzzer. We decided to make a design where the user is meant to practice their grip strength with the FSR.
// If the light sensor detects it is night time and the user is asleep, it vibrates the motor and flashes the light to wake them up. When the FSR sensor
// detects the user is applying pressure, it tones the buzzer. The pitch of the buzzer may also be adjusted using the potentiometer.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/4/2025
// Code written by: Both team members 


const int ledPin = 9; // pin that the LED is attached to
int analogValue = 0; // value read from the potentiometer
int brightness = 0; // PWM pin that the LED is on.
void setup() {
  // put your setup code here, to run once:
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  // declare the led pin as an output:
  pinMode(ledPin, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  analogValue = analogRead(A0);// read the value
  brightness = analogValue /4;//divide by 4 to fit in a byte
  analogWrite(ledPin, brightness);//PWM the LED with the brightness value
  Serial.println(brightness);// print the brightness
}

