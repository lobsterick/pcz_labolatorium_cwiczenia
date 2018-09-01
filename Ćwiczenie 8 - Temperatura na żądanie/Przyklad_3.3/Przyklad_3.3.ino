#include "DHT.h"          // biblioteka DHT
 
#define DHTPIN 2          // numer pinu sygnałowego
#define DHTTYPE DHT11     // typ czujnika (DHT11). Jesli posiadamy DHT22 wybieramy DHT22
 
DHT dht(DHTPIN, DHTTYPE); // definicja czujnika
int przycisk = 0;
 
void setup()
{
  Serial.begin(9600);     // otworzenie portu szeregowego
  dht.begin();            // inicjalizacja czujnika
  pinMode (3, INPUT);
  pinMode (13, OUTPUT);
}
 
void loop()
{
przycisk = digitalRead (3);

if (przycisk==HIGH)    {
float t = dht.readTemperature();
float h = dht.readHumidity();
   digitalWrite(13,HIGH);
    Serial.print("Wilgotnosc: ");
    Serial.print(h);
    Serial.print(" % ");
    Serial.print("Temperatura: ");  
    Serial.print(t);
    Serial.println(" *C");
    delay (1000);
  }
else
{
 digitalWrite (13,LOW);
}
}


