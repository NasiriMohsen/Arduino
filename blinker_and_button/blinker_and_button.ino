//********************************************************************************************
int led = 13;
int led2 = 12;
int b = 2;
int bs;
int modeled = LOW;
int ekht = 1000;
unsigned long ghabl = 0;
//********************************************************************************************
void setup(){
pinMode(led,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(b,INPUT);}
//********************************************************************************************
void loop() {
unsigned long hal = millis();
bs = digitalRead(b);
//**************************************************************
if(hal - ghabl == ekht){
  ghabl = hal;
  if(modeled == LOW){
    modeled = HIGH; 
  }else{ modeled = LOW; }
  digitalWrite(led,modeled); } 
//**************************************************************
if(bs == HIGH){
  digitalWrite(led2,HIGH);
}else{ digitalWrite(led2,LOW); }}
//********************************************************************************************
