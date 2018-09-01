#include "DHT.h"          // załączenie biblioteki DHT
 
#define DHTPIN 2          // zdefiniowanie numeru pinu sygnałowego
#define DHTTYPE DHT11     // zdefiniowanie typu czujnika
 
DHT dht(DHTPIN, DHTTYPE); // definicja czujnika
int przycisk = 0;
 
void setup()
{
  Serial.begin(9600);     // otworzenie portu szeregowego
  dht.begin();            // inicjalizacja czujnika
}
 
void loop()
{
float t = dht.readTemperature(); //pobranie do zmiennej t pomiaru temperatury
float h = dht.readHumidity(); // pobranie do zmiennej h pomiaru wilgotności
    Serial.print("Wilgotnosc: "); // wyświetlenie kolejno w Monitorze szeregowym wartości
    Serial.print(h);
    Serial.print(" % ");
    Serial.print("Temperatura: ");  
    Serial.print(t);
    Serial.println(" *C");
    delay (1000); //przerwa między odczytami
}


