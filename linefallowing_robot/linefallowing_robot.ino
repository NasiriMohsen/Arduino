int s1 = 14;
int pwm1 = 5;
int pwm2 = 6;
int m1 = 8;
int m2 = 7;
int m3 = 3;
int m4 = 2;
int m5 = 12;
//*****************
void setup() {
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(m5,OUTPUT);
pinMode(pwm1,OUTPUT);
pinMode(pwm2,OUTPUT);

Serial.begin(9600);

analogWrite(pwm1,150);
analogWrite(pwm2,150);

digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
digitalWrite(m5,LOW);
}
//*****************
void loop() {
int a1 = analogRead(s1);
//*****************
Serial.print(" a1 =  ");
Serial.println(a1);
//*****************
if(a1 <= 950 && a1 > 50){
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW);
digitalWrite(m5,LOW);
}
//*****************
else if (a1 > 950){
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,HIGH);
digitalWrite(m5,LOW);
}
else {
digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
digitalWrite(m5,HIGH);  
}
delay(10);
}

