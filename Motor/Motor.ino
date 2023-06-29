#define m1 5
#define m2 6
#define m3 9
#define m4 10

void setup(){
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
}

void loop(){
    analogWrite(m1,0);
    analogWrite(m2,255);
    analogWrite(m3,0);
    analogWrite(m4,255);
}
