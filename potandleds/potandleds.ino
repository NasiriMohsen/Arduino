int led = 12;
int led1 = 13;
int pot = 0;
void setup() {
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
}
void loop() {
if (analogRead(pot) > 511){ 
 digitalWrite(led1,LOW);
 digitalWrite(led,HIGH); }
 else if(analogRead(pot) < 511){
 digitalWrite(led,LOW);
  digitalWrite(led1,HIGH);
 }
delay(15);
}

