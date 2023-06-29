#include <LiquidCrystal.h>
const int button=8;
int buttonState = 0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int sensor=A3; // Assigning analog pin A1 to variable 'sensor'
float tempc;  //variable to store temperature in degree Celsius
float tempf;  //variable to store temperature in Fahreinheit 
float vout; 
void setup() {
pinMode(sensor,INPUT);
  pinMode(button, INPUT);
lcd.begin(16, 2);
delay(500);}
void loop() {
buttonState = digitalRead(button);
if(buttonState == HIGH){ 
lcd.setCursor(0, 1);
lcd.print("I Rock!!!       ");}
else{                           
vout=analogRead(sensor);
vout=(vout*500)/1023;
tempc=vout; // Storing value in Degree Celsius
tempf=(vout*1.8)+32; // Converting to Fahrenheit 
lcd.setCursor(0,1);
lcd.print("Degree ");
lcd.print(tempc);
delay(1000); }}





