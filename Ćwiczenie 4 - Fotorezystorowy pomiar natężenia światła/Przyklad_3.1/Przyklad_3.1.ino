int j = 0;
void setup()
{
Serial.begin(9600); //otworzenie portu szeregowego
pinMode (A0, INPUT); // definicja portu analogowego A0 jako wejścia
}
  
void loop()       // główna pętla programu
{
j = analogRead(A0); //przypisanie zmiennej „j” wartości odczytanej z wejścia analogowego 0
Serial.println(j); // wysłanie wartości "j" do monitora szeregowego
delay(300);       //odczekanie 300 milisekund
}
