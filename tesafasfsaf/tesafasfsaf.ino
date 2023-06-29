int kilid = 2;
int io = 0;
int bs ;
int led = 13;
void setup() {
pinMode(kilid,INPUT);
pinMode(led,OUTPUT); 
  }
void loop() {
bs = digitalRead(kilid);
if (bs == 1){
  io = io + 1 ; 
}
if (io == 1){
 digitalWrite(led,HIGH); 
}else if(io == 2){
  digitalWrite(led,LOW);
  io = 0;
}else{
  digitalWrite(led,LOW);
}
}
