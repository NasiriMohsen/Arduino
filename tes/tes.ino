#include <Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
myservo.write(15);
delay(1000);
myservo.write(170);
delay(1000);
}
