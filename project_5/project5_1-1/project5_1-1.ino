//TMP36 Pin Variables
int sensorPin = 0; //the analog pin, the TMP36's Vout
//(sense) pin is connected to
//the resolution is 10 mV / degree centigrade with a 3
//500 mV offset to allow for negative temperatures
void setup()
{
  Serial.begin(9600); //Start the serial connection
}
void loop()
{
  //getting the voltage reading from the temperature sensor
  int reading = analogRead(sensorPin);
  // converting that reading to voltage, for 3.3v Arduino
  // use 3.3
  float voltage = reading * 5.0;
  voltage /= 1024.0; // map input voltages between 0 and 1023
  // print out the voltage
  Serial.print(voltage);
  Serial.println(" volts");
  // now print out the temperature
  //converting from 10 mv per degree with 500 mV offset
  //to degrees ((voltage - 500mV)*100)
  float temperatureC = (voltage - 0.5) * 100 ;
  Serial.print(temperatureC);
  Serial.println(" degrees C");
  // now convert to Fahrenheit
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print(temperatureF);
  Serial.println(" degrees F");
  delay(1000); //waiting a second
}
