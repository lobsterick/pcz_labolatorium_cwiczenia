void setup() {
  pinMode(8, INPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  if(digitalRead(8)==LOW){
    digitalWrite(12, HIGH);
    delay(100);
  digitalWrite(12, LOW);
    delay(50);
}else{
  digitalWrite (12, LOW);
}
}
