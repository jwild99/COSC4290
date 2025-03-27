///////////////////////////////////////////////////////////////////////////////
// Circuit Playground Analog In - Speaker Fun ?
//
// Author: Carter Nelson
// MIT License (https://opensource.org/licenses/MIT)

#include <Adafruit_CircuitPlayground.h>

uint16_t value;
uint16_t freq;

///////////////////////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

///////////////////////////////////////////////////////////////////////////////
void loop() {
  value = analogRead(3);
  freq = map(value, 0, 1023, 100, 10000);

  CircuitPlayground.playTone(freq, 100, false);
}
