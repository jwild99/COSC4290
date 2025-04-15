#include <Wire.h>
#include <SparkFun_APDS9960.h>
SparkFun_APDS9960 apds = SparkFun_APDS9960();

void setup() {
  Serial.begin(9600);
  Serial.println("APDS-9960 test");

  // Initialize APDS9960
  if (apds.init()) {
    Serial.println("APDS9960 initialization complete");
  } 
  else {
    Serial.println("APDS9960 initialization failed");
  }

  // Enable proximity, ambient light, and color sensing
  if (apds.enableLightSensor(true)) {
    Serial.println("Light sensor enabled");
  } 
  else {
    Serial.println("Failed to enable light sensor");
  }

  if (apds.enableProximitySensor(true)) {
    Serial.println("Proximity sensor enabled");
  } 
  else {
    Serial.println("Failed to enable proximity sensor");
  }

  delay(500); // Allow sensors to warm up
  }


void loop() {
  uint16_t ambientLight, red, green, blue;
  uint8_t proximity;

  // Read light values
  if (apds.readAmbientLight(ambientLight) && apds.readRedLight(red) && apds.readGreenLight(green) && apds.readBlueLight(blue)) {
    Serial.print("Ambient: "); Serial.print(ambientLight);
    Serial.print(" R: "); Serial.print(red);
    Serial.print(" G: "); Serial.print(green);
    Serial.print(" B: "); Serial.println(blue);
  }

  // Read proximity value
  if (apds.readProximity(proximity)) {
    Serial.print("Proximity: ");
    Serial.println(proximity);
  }
  
  delay(500); // Delay between reads
}
