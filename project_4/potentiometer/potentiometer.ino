// Project 4: Potentiometer

// The purpose of this project was to create a design which changes the brightness of and LED based on the input reading from a potentiometer.

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

