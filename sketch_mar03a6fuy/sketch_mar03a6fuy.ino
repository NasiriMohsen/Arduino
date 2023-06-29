#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(7, 8); // CE, CSN
const byte addresses[][6] = {"00001", "00002"};
int m1 = 2;
int m2 = 4;
int m3 = 3;
int m4 = 5;
int m5 = 6;
int m6 = 9;
void setup() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(m5, OUTPUT);
  pinMode(m6, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(1`, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  radio.begin();
  radio.openWritingPipe(addresses[0]); // 00002
  radio.openReadingPipe(1, addresses[1]); // 00001
  radio.setPALevel(RF24_PA_MIN);
}
void loop() {
  delay(5);
  radio.startListening();
  if ( radio.available()) {
    while (radio.available()) {
      int val1 = 0;
      int val2 = 0;
      int bs = 1;
      radio.read(&val1, sizeof(val1));
      radio.read(&val2, sizeof(val2));
      radio.read(&bs, sizeof(bs));
      if (val1 = 2 && val2 == 2) {
        analogWrite(m1, 0);
        analogWrite(m2, 0);
        analogWrite(m3, 0);
        analogWrite(m4, 0);
        analogWrite(m5, 0);
        analogWrite(m6, 0);
      } else if (val1 == 1) {
        analogWrite(m1, 0);
        analogWrite(m2, 0);
        analogWrite(m3, 0);
        analogWrite(m4, 255);
        analogWrite(m5, 0);
        analogWrite(m6, 255);
      
    } else if (val1 == 3) {
      analogWrite(m1, 0);
      analogWrite(m2, 0);
      analogWrite(m3, 255);
      analogWrite(m4, 0);
      analogWrite(m5, 255);
      analogWrite(m6, 0);
    } else if (val1 == 2) {
      analogWrite(m1, 0);
      analogWrite(m2, 0);
      analogWrite(m3, 0);
      analogWrite(m4, 0);
      analogWrite(m5, 0);
      analogWrite(m6, 0);
    } else if (val2 == 2) {
      analogWrite(m1, 0);
      analogWrite(m2, 0);
      analogWrite(m3, 0);
      analogWrite(m4, 0);
      analogWrite(m5, 0);
      analogWrite(m6, 0);
    } else if (val2 == 3) {
      analogWrite(m1, 0);
      analogWrite(m2, 0);
      analogWrite(m3, 0);
      analogWrite(m4, 255);
      analogWrite(m5, 255);
      analogWrite(m6, 0);
    } else if (val2 == 1) {
      analogWrite(m1, 1);
      analogWrite(m2, 0);
      analogWrite(m3, 255);
      analogWrite(m4, 0);
      analogWrite(m5, 0);
      analogWrite(m6, 255);
    } else if (bs = 0) {
      analogWrite(1, 255);
      analogWrite(m2, 0);
      analogWrite(m3, 0);
      analogWrite(m4, 0);
      analogWrite(m5, 0);
      analogWrite(m6, 0);


    }

    }
    delay(5);
  }  }

