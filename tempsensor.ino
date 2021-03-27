#include "Adafruit_DHT.h"

#define DHTPIN D6   // Pin the sensor is connected to.

#define DHTTYPE DHT22   // Sensor type.

DHT dht(DHTPIN, DHTTYPE);

void setup() {

}

void loop() {
    // Wait for 30 seconds between measurements.
	delay(30000);

    // Read temperature as Celsius.
	String temp = String(dht.getTempCelcius());

    // Publish event.
	Particle.publish("temp", temp, PRIVATE); 
}