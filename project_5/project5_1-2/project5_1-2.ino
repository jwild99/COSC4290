// Project 5: NTC 100k Thermistor

// The purpose of this project was to create a design to read in temperature data from the NTC 100k Thermistor and display
// it to the serial monitor

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 3/25/2025
// Code written by: Both team members 

int ThermistorPin = A0;
int Vo;
float R1 = 10000;
float logR2, R2, T, Tc, Tf;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07; // Steinhart-Hart coefficients
void setup() {
  Serial.begin(9600);
}
void loop() {
  //Reads the analog voltage from the thermistor.
  Vo = analogRead(ThermistorPin);
  //Calculate Thermistor Resistance, where 1023 represents
  //the full ADC range: Vo=Vin×(R2/(R1+R2))
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  // 5
  // The Steinhart-Hart equation relates the thermistor
  //resistance to temperature: 1/T=c1+c2ln(R2)+c3(ln(R2))^3
  //where T in Kelvin.
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  //Convert to Celsius and Fahrenheit
  Tc = T - 273.15;
  Tf = (Tc * 9.0)/ 5.0 + 32.0;
  Serial.print("Temperature: ");
  Serial.print(Tf);
  Serial.print(" F; ");
  Serial.print(Tc);
  Serial.println(" C");
  delay(500);
}