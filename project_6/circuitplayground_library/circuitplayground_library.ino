// Adafruit Circuit Playground - Two tone sounds    Support Open Source, buy at Adafruit
//   2016-08-05 Version 1  by Mike Barela for Adafruit Industries
// Uses the CircuitPlayground library to easily use the full functionality of the board

#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
}
 
void loop() {
  if(CircuitPlayground.leftButton()) {   // if reading the left button returns true
    CircuitPlayground.playTone(440,100);    // output a 440 Hz sound for a tenth of a second
  }
  else if(CircuitPlayground.rightButton()) { // if reading the right button returns true
    CircuitPlayground.playTone(1760,100);   // output a 1760 Hz sound for a tenth of a second                    
  }
}
