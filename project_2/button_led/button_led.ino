// Project 2, Part 4: Button LED. The purpose of this project was to create a program to turn on a 
// red LED when a push button is pressed, otherwise turn on a yellow LED

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/11/2025
// Code written by: Both team members

// constants won't change.
const int buttonPin = 2; //pushbutton pin
const int ledPin1 = 3; // LED pin 1
const int ledPin2 = 4; // LED pin 2

// variables will change:
int buttonState = 0; //for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn red LED on and yellow LED off:
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  } 
  else {
    // turn red LED off and yellow LED on:
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }
}
