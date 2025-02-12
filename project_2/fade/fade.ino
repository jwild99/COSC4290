// Project 2, Part 1: LED Fading brighter to dimmer. This project makes an LED increase in brightness 
// then gradually dim itself again

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/11/2025
// Code written by: Both team members

int LED = 11;   // LED pin number
int fade = 0;   // Starting value for brightness of LED

void setup() {
  pinMode(LED, OUTPUT);   // Set pin to OUTPUT mode
  Serial.begin(9600);     // Set baud rate to 9600

}

void loop() {
  // While the birghtness is not maxed out, increase the brightness
  while(fade < 255) {   
    analogWrite(LED, fade);
    fade = fade + 15;
    delay(500);
  }
  // Once the brightness has maxed out, decrease the brightness back to zero
  while(fade > 0) {
      analogWrite(LED, fade);
      fade = fade - 15;
      delay(500);
  }
}
