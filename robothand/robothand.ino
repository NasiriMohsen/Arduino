#include <Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4; 
Servo myservo5;  
int potpin1 = 0; 
int potpin2 = 1; 
int potpin3 = 2; 
int potpin4 = 3; 
int potpin5 = 4;
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;
void setup() {
  myservo1.attach(2); 
  myservo2.attach(3); 
  myservo3.attach(4); 
  myservo4.attach(5); 
  myservo5.attach(6); 
}
void loop() {
  val1 = analogRead(potpin1);          
  val1 = map(val1, 0, 1023, 0, 180);   
  myservo1.write(val1);                
  val2 = analogRead(potpin2);          
  val2 = map(val2, 0, 1023, 0, 180);   
  myservo2.write(val2);   
  val3 = analogRead(potpin3);          
  val3 = map(val3, 0, 1023, 180, 0);   
  myservo3.write(val3);     
  val4 = analogRead(potpin4);          
  val4 = map(val4, 0, 1023, 0, 180);   
  myservo4.write(val4);
  val5 = analogRead(potpin5);          
  val5 = map(val5, 0, 1023, 0, 180);   
  myservo5.write(val5);   
  delay(50);                         
}

