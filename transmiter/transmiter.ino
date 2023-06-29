#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#define led 12
RF24 radio(7, 8); // CE, CSN
const byte addresses[][6] = {"00001", "00002"};
boolean buttonState = 0;
int but = 2;
void setup() {
  Serial.begin(9600);
  pinMode(but,INPUT_PULLUP);
  radio.begin();
  radio.openWritingPipe(addresses[1]); // 00001
  radio.openReadingPipe(1, addresses[0]); // 00002
  radio.setPALevel(RF24_PA_MIN);
}void loop() {
  delay(5);
  radio.stopListening();
  int bs = digitalRead(but);
  int joy1 = analogRead(A0);
  int joy2 = analogRead(A1);
  int val1 = map(joy1, 0, 1023, 1, 3);
  int val2 = map(joy2, 0, 1023, 1, 3);
  radio.write(&val1, sizeof(val1));
  radio.write(&val2, sizeof(val2));
  radio.write(&bs, sizeof(bs));
  delay(5);
  Serial.print(" v1 = ");
  Serial.print(val1);
  Serial.print(" v2 = ");
  Serial.print(val2);
  Serial.print(" bs = ");
  Serial.println(bs);
}

