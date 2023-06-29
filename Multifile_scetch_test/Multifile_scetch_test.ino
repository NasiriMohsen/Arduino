#include "smt1.h"

void setup() {
  LEDinit();
}

void loop() {
  LED(1);
  delay(1000);
  LED(0);
  delay(1000);
}
