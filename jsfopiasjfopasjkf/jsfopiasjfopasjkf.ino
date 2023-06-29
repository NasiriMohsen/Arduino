#include <SoftwareSerial.h>
//**************************************************
SoftwareSerial akbar(10, 11); //(rx,tx)
//**************************************************
void setup() {
//**************************************************
  Serial.begin(9600); akbar.begin(9600);
//**************************************************  
  while (!Serial) {  }
  Serial.println("harchi mikhay btype");
}
void loop() {
  if (akbar.available()) { Serial.write(akbar.read()); }
  if (Serial.available()) { akbar.write(Serial.read());}}

