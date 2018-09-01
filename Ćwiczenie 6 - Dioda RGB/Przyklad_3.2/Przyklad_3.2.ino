#define ANODA      1
#define KATODA     0     

#define COMMON_PIN    ANODA

#define DLY  delay(2000)

//lista kolorów
//aby wyświetlic użyj setRGBcolor( KOLOR );

#define RED             0xFF0000
#define GREEN           0x00FF00
#define BLUE            0x0000FF
#define WHITE           0xFFFFFF

//koniec listy

void setup() {

  pinMode(3, OUTPUT);          //R
  pinMode(5, OUTPUT);          //G
  pinMode(6, OUTPUT);          //B

}

void loop() {
  
  setRGBcolor( WHITE );
  DLY;
      
}

void setRGB( uint8_t r, uint8_t g, uint8_t b){

    if( !COMMON_PIN ) {
    analogWrite(3, r);
    analogWrite(5, g);
    analogWrite(6, b);
    }

    else if( COMMON_PIN ) {
      
    analogWrite(3, 255 - r);
    analogWrite(5, 255 - g);
    analogWrite(6, 255 - b);      
      
      }
  }
  
void setRGBcolor( uint32_t rgb){
  
    setRGB( rgb >> 16, rgb >> 8, rgb);
  
  }
