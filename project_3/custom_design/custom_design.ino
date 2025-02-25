// Project 3: Final custom circuit.

// The purpose of this project was to create a final custom design that we would transfer over to the perf board 
// and solder the necessary connections. For this design we decided to make a circuit which uses a button, 2 LEDs,
// a motor, and a buzzer. When the button is not pressed, one of the LEDs will be on. When the button is pressed, the
// other LED will turn on, the motor will vibrate, and the buzzer will play a sound.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/24/2025
// Code written by: Both team members

// constants won't change: 
const int led1 = 10;        // led pin 1
const int led2 = 6;         // led pin 2
const int motor = 19;       // motor pin
const int buzzer = 15;      // buzzer pin
const int c_note = 261;     // tune of buzzer
const int buttonPin = 3;    // button pin

// variables will change:
int buttonState = 0;    //for reading the pushbutton status

void setup() {
  // initialize the LEDs, motor, and buzzer pins as an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(motor, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED2, motor, and buzzer on. Set the buzzer to play the specified note:
   digitalWrite(motor, HIGH);
   tone(buzzer, 261);
   digitalWrite(led1, LOW);
   digitalWrite(led2, HIGH);
  } 
  else {
    // turn on LED1, turn off everything else
    noTone(buzzer);
    digitalWrite(motor, LOW);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    
  }
}

