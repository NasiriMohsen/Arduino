void setup() {
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
  randomSeed(analogRead(0));
}

void loop() {
  int led = random(11, 14);
  
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
}
