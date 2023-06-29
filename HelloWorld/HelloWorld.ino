#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int inpin = 7;
void setup() { 
pinMode(inpin,INPUT);
if(digitalRead(inpin)==HIGH){
lcd.begin(16, 2);
lcd.print("Mohsen Rocks!"); }
else{
lcd.begin(16, 2);
lcd.print("Mohsen is AWSOME!"); } }
void loop() {}

