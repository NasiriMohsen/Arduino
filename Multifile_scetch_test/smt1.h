#define LED1 13

void LEDinit(){
  pinMode(LED1,OUTPUT);
}

void LED(bool state){
  digitalWrite(LED1,state);
}
