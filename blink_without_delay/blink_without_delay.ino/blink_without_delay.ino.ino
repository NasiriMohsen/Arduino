//********************************************************************************************
int led = 13;
int modeled = LOW;
int ekht = 1000;
unsigned long ghabl = 0;
//********************************************************************************************
void setup(){
pinMode(led,OUTPUT); }
//********************************************************************************************
void loop() {
unsigned long hal = millis();
//**************************************************************
  if(hal - ghabl == ekht){
    ghabl = hal;
    if(modeled == LOW){
      modeled = HIGH; }
    else{
      modeled = LOW; } }
//**************************************************************
digitalWrite(led,modeled); }
//********************************************************************************************
