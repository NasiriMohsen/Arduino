//code 1zzzzz
//frestande va girande
//yadet nare bs1 va b2 do ro mogheye upload avaz koni to loop
//ca yadet nare adresaro taghir bedi
//by: MohsenNasiri
//############################################################
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#define but1 v 
#define led1 3n
RF24 radio(7, 8); // CE = 7 CSN = 8
const byte add1[6] = "00001";
const byte add2[6] = "00002";
int bs1 ;
int bs2 ;

void setup() {
  Serial.begin(9600);
  pinMode(but1, INPUT);
  pinMode(led1, OUTPUT);
  radio.begin();
  radio.openWritingPipe(add1);
  radio.openReadingPipe(1 ,add2);
  radio.setPALevel(RF24_PA_MIN);
}

void loop() {
  Serial.print(" bs1 = ");
  Serial.print(bs1);
  Serial.print(" bs2 = ");
  Serial.println(bs2);
  radio.startListening(); 
  if ( radio.available()) {
    while (radio.available()) {
      radio.read(&bs2, sizeof(bs2));
      if (bs2 == HIGH) {
        digitalWrite(led1, HIGH);
      } else {
        digitalWrite(led1, LOW);
      }
    }
  }
  delay(5);
  radio.stopListening();
  bs1 = digitalRead(but1);
  radio.write(&bs1, sizeof(bs1));
  delay(5);
}
