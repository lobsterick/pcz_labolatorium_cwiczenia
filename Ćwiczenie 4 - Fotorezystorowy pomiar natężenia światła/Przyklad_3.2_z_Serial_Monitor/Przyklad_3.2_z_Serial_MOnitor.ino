int diody[] = {-1,3,4,5,6,7,8,9};    // tablica zawierająca numery wyj. cyfrowych
int size = 8;       // wielkość tablicy
int j = 0;        // tworzymy zmienną „j” i przypisujemy jej wartość  

void setup()
{
  Serial.begin(9600);
   for (int i=1; i< size; i++)   // pętla for
 {
    pinMode(diody[i], OUTPUT);    //ustawienie pinów jako wyjścia
  }
}
 
void loop()       // główna pętla programu
{
j = analogRead(0); //przypisanie do zmiennej „j” wartości odczytanej z wejścia analogowego 0
j = j/128;                      //dzielimy otrzymaną wartość przez 128
for (int i=1;i<size;i++)
{
    if (i <= j )       //wejście w przypadku poprawności wyrażenia j większe równe i
  {
      digitalWrite(diody[i], HIGH);   // ustaw stan wysoki na diodach
     }
else          //wykonanie kodu w przypadku niespełnienia warunku
   {
      digitalWrite(diody[i], LOW);  //ustaw stan niski na diodach
    }
  }
  delay(300);       //czekaj 300 milisekund
  Serial.println(j);
}
