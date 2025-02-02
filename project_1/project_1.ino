// Project 1: LED Blinking
// Group Members: Josh Wild, Dayne Newman
// Date: 2/2/2025
// Code written by: Both team members


// LEDS and corresponding pin numbers
int LED1 = 13;  // red LED
int LED2 = 12;  // white LED
int LED3 = 11;  // blue LED

// counter for blink number
int counter = 0;

void setup() {
  // put your setup code here, to run once:

  // setup each LED for output mode
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // before each HIGH output, increase counter and print blink number
  counter = counter + 1;
  Serial.print("Blink Number #");
  Serial.println(counter);

  // turn on red
  digitalWrite(LED1, HIGH);
  delay(500);
  // turn off red
  digitalWrite(LED1, LOW);

  counter = counter + 1;
  Serial.print("Blink Number #");
  Serial.println(counter);

  // turn on white
  digitalWrite(LED2, HIGH);
  delay(500);
  // turn off white
  digitalWrite(LED2, LOW);

  counter = counter + 1;
  Serial.print("Blink Number #");
  Serial.println(counter);

  // turn on blue
  digitalWrite(LED3, HIGH);
  delay(500);
  // turn off blue
  digitalWrite(LED3, LOW);

  counter = counter + 1;
  Serial.print("Blink Number #");
  Serial.println(counter);

  // turn on white
  digitalWrite(LED2, HIGH);
  delay(500);
  // turn off white
  digitalWrite(LED2, LOW);
}
