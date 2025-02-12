// Project 2, Part 1: Custom Light Design. This project was to make a custom light design with 5 LEDs. We decided to
// make the 5 LEDs brighten at different rates until all the LEDs are fully bright. Then the LEDs all turn off
// and the process starts over.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/11/2025
// Code written by: Both team members

// Pin numbers for each LED
int LED1 = 11;  
int LED2 = 10;
int LED3 = 9;
int LED4 = 6;
int LED5 = 5;

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
  // Loop until all LEDs are at maximum brightness
  // Each LED has the value of its counter written to it using analogWrite, and then the counter are incremented 
  // by various amounts 1, 2, 4, 8, 16, to make the brightness of each light increase in a staggered fashion.
  while (counter1 < 255 || counter2 < 255 || counter3 < 255 || counter4 < 255 || counter5 < 255) {
    // Only increase an LED's brightness if it is not already at maximum brightness
    if (counter1 < 255) {
      analogWrite(LED1, counter1);
      counter1 = counter1 + 16;
    }
    if (counter2 < 255) {
      analogWrite(LED2, counter2);
      counter2 = counter2 + 8;
    }
    if (counter3 < 255) {
      analogWrite(LED3, counter3);
      counter3 = counter3 + 4;
    }
    if (counter4 < 255) {
      analogWrite(LED4, counter4);
      counter4 = counter4 + 2;
    }
    if (counter5 < 255) {
      analogWrite(LED5, counter5);
      counter5 = counter5 + 1;
    }
    delay(1000);  // Delay by 1 second before increasing the brightness of LEDs
  }

  // Turn all LEDs off
  analogWrite(LED1, 0);
  analogWrite(LED2, 0);
  analogWrite(LED3, 0);
  analogWrite(LED4, 0);
  analogWrite(LED5, 0);

  // Reset all coutners before the process starts over again
  counter1 = 0;
  counter2 = 0;
  counter3 = 0;
  counter4 = 0;
  counter5 = 0;
}
