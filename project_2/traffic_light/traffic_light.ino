// Project 2, Part 1: LED Traffic Light. This project was to make 3 LEDs flash in a stoplight pattern

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/11/2025
// Code written by: Both team members

int RED_LED = 12;     // Pin number for red LED
int YELLOW_LED = 11;  // Pin number for yellow LED
int GREEN_LED = 10;   // Pin number for green LED

/* The purpose of this function is to set the LEDs to yield mode. This simply turns on the yellow LED, 
turns the other 2 LEDs off, and outputs to the serial console "Light mode: Yield". 
This function has no parameters and nothing is returned */
void yield_mode() {
  Serial.print("Light Mode: Yield\n");
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
}

/* The purpose of this function is to set the LEDs to go mode. This turns on the green LED, 
turns the other 2 LEDs off, and outputs to the serial console "Light mode: Go". 
This function has no parameters and nothing is returned */
void go_mode() {
  Serial.print("Light Mode: Go\n");
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);
}

/* The purpose of this function is to set the LEDs to stop mode. This turns on the red LED, 
turns the other 2 LEDs off, and outputs to the serial console "Light mode: Stop". 
This function has no parameters and nothing is returned */
void stop_mode() {
  Serial.print("Light Mode: Stop\n");
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(RED_LED, HIGH);
}

void setup() {
  // Initializes the LED pins to output mode and sets the serial baud rate to 9600
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Alternates between yield, go, and stop mode with a delay of 1 second in between
  yield_mode();
  delay(1000);
  go_mode();
  delay(2000);
  stop_mode();
  delay(2000);
}

