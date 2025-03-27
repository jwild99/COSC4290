///////////////////////////////////////////////////////////////////////////////
// Circuit Playground Analog In - NeoPixel Fun
//
// Author: Carter Nelson
// MIT License (https://opensource.org/licenses/MIT)

#include <Adafruit_CircuitPlayground.h>

uint16_t value;
uint8_t pixels;

///////////////////////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

///////////////////////////////////////////////////////////////////////////////
void loop() {
  value = analogRead(3);
  pixels = map(value, 0, 1023, 0, 10);

  CircuitPlayground.clearPixels();
  for (int p=0; p<pixels; p++) {
    CircuitPlayground.setPixelColor(p, 0xFF00FF);
  }
  delay(100);
}
