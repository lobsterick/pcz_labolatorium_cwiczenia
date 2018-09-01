void setup() {
  pinMode(8, INPUT);
  pinMode(12, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  if(digitalRead(8)==LOW){
    digitalWrite (2, HIGH);
    digitalWrite (3, LOW);
    digitalWrite(12, HIGH);
    delay(1000);
  digitalWrite(12, LOW);
    delay(500);
}else{
  digitalWrite (12, LOW);
   digitalWrite (3, HIGH);
    digitalWrite (2, LOW);
}
}
