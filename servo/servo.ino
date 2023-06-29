#include <Servo.h>
Servo myservo; 
void setup() {
  myservo.attach(9); 
}
void loop() {
myservo.write(80);              
delay(150);                      
    myservo.write(140);            
    delay(150);                     
}

