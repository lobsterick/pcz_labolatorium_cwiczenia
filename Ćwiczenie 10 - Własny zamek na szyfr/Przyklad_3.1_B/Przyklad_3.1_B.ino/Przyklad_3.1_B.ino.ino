#include <Keypad.h>                       //dodaj bibliotekę obsługującą klawiaturę

const byte wiersze = 4;                      //ilość wierszy klawiatury
const byte kolumny = 4;                      //ilość kolumn klawiatury


char klawiatura[wiersze][kolumny] = {                 //ustaw rozkład klawiszy
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte wierszePiny[wiersze] = {9,8,7,6};            //wiersze podłączone do pinów (numeracja od lewej strony do prawej)
byte kolumnyPiny[kolumny] = {5,4,3,2};            //kolumny podłączone do pinów (numeracja od lewej strony do prawej)


//utwórz klawiaturę na postawienie ustawienia klawiszy, pinów Arduino oraz ilości kolumn i wierszy
Keypad klaw1 = Keypad( makeKeymap(klawiatura), wierszePiny, kolumnyPiny, wiersze, kolumny );

void setup()
{
  
  Serial.begin(9600);                      //rozpocznij transmisję UART 
  pinMode(12, OUTPUT);
}
  
void loop()
{
  char przycisk = klaw1.getKey();              //zmiennej char przypisujemy zwrócony znak z klawiatury                                
  
  if (przycisk)                                 //jeżeli wykryto wciśnięty przycisk to:
  {                              
    Serial.print("Wcisnieto przycisk: "); //wyświetl wciśnięto przycisk:
    Serial.println(przycisk);                  // wyświetl klawisz    
    Serial.println("Pogram zostanie odblokowany za:");
    Serial.println("5");
    delay(1000);
    Serial.println("4");
    delay(1000);
    Serial.println("3");
    delay(1000);
    Serial.println("2");
    delay(1000);
    Serial.println("1");
    delay(1000);
    Serial.println("Program odblokowany, mozna smialo naciskac dalej :)");
  }
  
}
