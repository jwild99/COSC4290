// Project 2, Part 5: Final custom circuit The purpose of this project was to create a custom buzzer tune. 
// We used chat GPT to generate the notes and note durations necessary to create twinkle twinkle little star with the buzzer

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/11/2025
// Code written by: Both team members with help from ChatGPT

// constants won't change: 
const int buttonPin = 2;  //pushbutton pin
const int ledPin = 3;     // LED pin 
const int buzzer = 4;     // buzzer pin
const int motor = 5;      // motor pin
const int c_note = 261;   // tune of buzzer

// variables will change:
int buttonState = 0; //for reading the pushbutton status

void setup() {
  // initialize the LED, motor, and buzzer pins as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(motor, OUTPUT);
  pinMode(buzzer, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED, motor, and buzzer on. Set the buzzer to play the specified note:
    digitalWrite(ledPin, HIGH);
    analogWrite(motor, 255);
    tone(buzzer, c_note);

  } 
  else {
    // turn LED, motor, and buzzer off:
    digitalWrite(ledPin, LOW);
    analogWrite(motor, 0);
    noTone(buzzer);
  }
}
