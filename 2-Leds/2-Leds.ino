#define led1 13
#define led2 12
#define led3 11

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
}

void loop() {
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led3,LOW);
}
