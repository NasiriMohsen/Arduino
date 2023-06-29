int led = 12;
int btt = 2;
int bs = 0;
void setup() {
  pinMode(12,OUTPUT);
  pinMode(2,INPUT);
}
void loop() {
bs = digitalRead(btt);
 if(bs == HIGH){
    digitalWrite(led,HIGH);}
    else {
      digitalWrite(led,LOW);
    }

  }
