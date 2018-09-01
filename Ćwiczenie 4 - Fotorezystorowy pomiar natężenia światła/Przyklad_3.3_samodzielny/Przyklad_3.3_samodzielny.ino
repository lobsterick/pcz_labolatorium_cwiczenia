int j = 0;
void setup()
{
pinMode (A0, INPUT);// definicja portu analogowego A0 jako wejścia
pinMode (8, OUTPUT);
pinMode (9, OUTPUT);
Serial.begin(9600);
}
  
void loop()       // główna pętla programu
{
j = analogRead(A0); //przypisanie zmiennej „j” wartości odczytanej z wejścia analogowego 0
Serial.println(j); // wysłanie wartości "j" do monitora szeregowego
if(j>5)
{
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
}
else
{
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
}
delay(300);//odczekanie 300 milisekund
}
