int led = 12;
int b = 2;
int bs = digitalRead(b);
//************************************
void setup() {
pinMode(led,OUTPUT);
pinMode(b,INPUT);
attachInterrupt(digitalPinToInterrupt(b),isr,HIGH);
}
//************************************
void loop() { 
}
//************************************
void isr(){
  digitalWrite(led,HIGH);
  digitalWrite(led,LOW);
}

