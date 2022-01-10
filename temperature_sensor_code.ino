//Library Setup

#include <DHT.h>
#include <DHT_U.h>

#include <Adafruit_Sensor.h>


//Setup

#define DHTPIN = 7; 
#define DHTTYPE = DHT11; 
DHT dht(7, DHT11);

//Function

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
} 

void loop () {
  float h = dht.readHumidity(); 
  float f = dht.readTemperature(true);

  if (isnan(h) && isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;

  }

  float hif = dht.computeHeatIndex(f, h);

Serial.print(F(" Humidity: "));
Serial.print(h);
Serial.print(F("%  Temperature: "));
Serial.print(f);
Serial.print(F("°F  Heat index: "));
Serial.print(F("°C "));
Serial.print(hif);
Serial.println(F("°F"));

  }
