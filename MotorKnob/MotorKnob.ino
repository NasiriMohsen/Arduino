#include <Stepper.h>

Stepper stepper(400,5,6);
Stepper stepper2(400,9,10);

void setup() {
  stepper.setSpeed(300);
  stepper2.setSpeed(300);

  for(int s=0; s<1000; s++){
    stepper.step(-1);
    stepper2.step(1);
  }
  

}

void loop() {

}
