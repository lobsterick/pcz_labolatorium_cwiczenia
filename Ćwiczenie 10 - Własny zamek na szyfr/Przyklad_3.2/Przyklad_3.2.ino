#include <Keypad.h>

const byte wiersze= 4; //ilość wierszy
const byte kolumny= 4; //ilość kolumn

char mapaklawiszy[wiersze][kolumny]= 
{
{'1', '2', '3', 'A'}, 
{'4', '5', '6', 'B'}, 
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};

byte wiersze_piny[wiersze] = {9,8,7,6}; // wiersze 0-3
byte kolumny_piny[kolumny]= {5,4,3,2}; // kolumny 0-3
volatile int l=0; // zmienna pomocnicza, licznik znaków
int mykey[5]; // taklica wciśnietych znaków
Keypad myKeypad= Keypad(makeKeymap(mapaklawiszy), wiersze_piny, kolumny_piny,
wiersze, kolumny); 

void warning_bad() 
  {
  Serial.println(" ---> Kod NIEPRAWIDLOWY");
  l=0;
  }
  
void setup()
 {
   pinMode(10,OUTPUT);
   pinMode(11,OUTPUT);
   digitalWrite(10,0);
   digitalWrite(11,0);
   Serial.begin(9600);
   Serial.flush();
 }
//--------------------------------------------------------
void loop()
 {
  Serial.print("Wprowadz KOD dostepu: "); 
   while(l<5)
     {
     char keypressed = myKeypad.getKey();
     if (keypressed != NO_KEY)
       {
       mykey[l]=keypressed;l++;Serial.print(keypressed);
       } 
     }
   if( mykey[0]=='1' && mykey[1]=='1' && mykey[2]=='1' 
   && mykey[3]=='1' && mykey[4]=='1' )
     {
     Serial.println(" OK !!!");
     digitalWrite(11,HIGH);delay(3000);digitalWrite(11,LOW); 
     l=0;
     }  
       else
       {warning_bad();delay(500);} 
 }
