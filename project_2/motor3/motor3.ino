// Project 2, Part 2: Two-Motor Design based on keyboard input. The purpose of this project was to get two different
// motors to vibrate when their corresponding button on the host keyboard is pressed. For motor 1, this was 'a', and for
// motor 2 this was 'b'.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/11/2025
// Code written by: Both team members

char data = 0;           // declare a variable to hold the key that is pressed by the user
const int motor1 = 11;   // Pin number for motor 1
const int motor2 = 10;   // Pin number for motor 2

void setup() {
  // Initialize the serial input to have a baud rate of 57600
  Serial.begin(57600);
}

void loop() {
  // if there is a char pressed on the kayboard
  if (Serial.available() > 0) 
  { 
    // read in this char and print it to the console
    data = Serial.read();
    Serial.print(data);

    // if this char is an 'a'
    if (data == 'a')
    {
      // turn on motor 1 for half a second before turning it back off
      analogWrite(motor1, 255);
      delay(500);
      analogWrite(motor1, 0);
    }
    // if the char is instead 'b'
    else if (data == 'b')
    {
      // turn on motor 2 for half a second before turning it back off again
      analogWrite(motor2, 255);
      delay(500);
      analogWrite(motor2, 0);
      delay(500);
    }
  }
}
