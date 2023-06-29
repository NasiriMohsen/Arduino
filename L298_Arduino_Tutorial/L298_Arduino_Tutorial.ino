const int motorPin1  = 9;  
const int motorPin2  = 10;  
const int motorPin3  = 6;
const int motorPin4  = 5;  
void setup(){
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, OUTPUT);
}
void loop(){
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,LOW);
  digitalWrite(motorPin3,LOW);
  digitalWrite(motorPin4,LOW);
 }
}
