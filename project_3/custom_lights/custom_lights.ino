// Project 3: Custom Light Design. 

// This project was to make a custom light design with 5 LEDs. We decided to
// make the 5 LEDs stagger turning on and off to create a bouncing light design.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/24/2025
// Code written by: Both team members

// Pin numbers for each LED
int LED1 = 15;  // PIN A1 on nano = 15
int LED2 = 16;  // PIN A2 on nano = 16
int LED3 = 17;  // PIN A3 on nano = 17
int LED4 = 18;  // PIN A4 on nano = 18
int LED5 = 19;  // PIN A5 on nano = 19

// Declaration for counter variables which will control how bright the corresponding LED is
int counter1 = 0;
int counter2 = 0;
int counter3 = 0;
int counter4 = 0;
int counter5 = 0;

void setup() {
  // Initialize each LED to OUTPUT mode
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop() {
  // Turn the LEDs on one by one and turn them back off again when the next LED turns on. 
  // Once we reach the last LED, don't start with the first one again but instead go back the 
  // way we came and turn the lights on in reverse order until reaching the first LED again.
  // Delay by a quarter of a second between changing states.
  digitalWrite(LED1, HIGH);
  delay(250);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2, HIGH);
  delay(250);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(250);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  delay(250);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  delay(250);
  digitalWrite(LED5, LOW);
  digitalWrite(LED4, HIGH);
  delay(250);
  digitalWrite(LED4, LOW);
  digitalWrite(LED3, HIGH);
  delay(250);
  digitalWrite(LED3, LOW);
  digitalWrite(LED2, HIGH);
  delay(250);
  digitalWrite(LED2, LOW);

}

