// Section 4.b.III "Temperature to Sound"

// The purpose of this section was to show off the board's temperature sensor as well as buzzer where 
// the buzzer changed based on the temperature reading.

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/26/2025
// Code written by: Both team members 

#include <Adafruit_CircuitPlayground.h>

const float alertTemp = 90.0;  // temperature to alert on (use 32.0 for a freezer etc.)

void setup() {
  CircuitPlayground.begin();   // initialize the Circuit Playground library
  Serial.begin(9600);
}
 
void loop() {
   float temp; 
   uint16_t sound;
   if(CircuitPlayground.slideSwitch()) {       // if the slide switch is at "+"
     temp = CircuitPlayground.temperatureF();  //   read the light sensor
     Serial.println(temp);
     sound = (int) map(temp, 70.0, 100.0, 131.0, 1760.0);   // map light to music values
     CircuitPlayground.playTone(sound, 1000);   //   play sound fora second
   }
   else {   // switch set to "-" for absolute temperature measurement
     temp = CircuitPlayground.temperatureF(); // read the light sensor
     Serial.println(temp);
     if( temp > alertTemp ) {   // if the read temperature is > your prepicked alartTemp
       CircuitPlayground.playTone(3520, 1000); // play sound for a second  
     }
   }
}
