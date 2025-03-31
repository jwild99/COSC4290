#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
}

void loop() {
  float x = CircuitPlayground.motionX();
  float y = CircuitPlayground.motionY();

  if (x < -3) {
    setColor(0, 0, 255);  // Blue (Tilt Left)
  } else if (x > 3) {
    setColor(255, 0, 0);  // Red (Tilt Right)
  } else if (y < -3) {
    setColor(0, 255, 0);  // Green (Tilt Forward)
  } else if (y > 3) {
    setColor(255, 255, 0);  // Yellow (Tilt Backward)
  } else {
    setColor(255, 255, 255);  // White (Flat)
  }

  delay(100);
}

void setColor(int r, int g, int b) {
  for (int i = 0; i < 10; i++) {
    CircuitPlayground.setPixelColor(i, r, g, b);
  }
}
