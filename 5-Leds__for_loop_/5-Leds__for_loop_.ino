void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);

  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}

void loop() {
  for(int i=11;i <= 13;i++){
    digitalWrite(i,HIGH);
    delay(1000);
  }
  for(int i=13;i >= 11;i--){
    digitalWrite(i,LOW);
    delay(1000);
  }
}
