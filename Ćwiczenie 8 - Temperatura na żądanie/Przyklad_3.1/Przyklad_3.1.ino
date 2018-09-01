int przycisk = 0;

void setup()
{
  int przycisk = 0; // zdefiniowanie zmiennej "przycisk", potrzebnej do odczytu wciśnięcia
  pinMode (3, INPUT); // uruchamia port 3 w charakterze wejścia
  pinMode (13, OUTPUT); //uruchamia pin 13 w charakterze wyjścia
}

void loop()
{
  przycisk = digitalRead (3); //przypisanie zmiennej przycisk odczytu z pinu 3
  if (przycisk == HIGH) //jeśli przycisk wciśnięty
  {
    digitalWrite(13, HIGH); //zapal diodę
  }
  else //jeśli nie
  {
    digitalWrite(13, LOW); // zgaś diodę
  }
}

