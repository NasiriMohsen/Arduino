#include <LiquidCrystal.h>

const int TRIG_PIN = 6;
const int ECHO_PIN = 7;

LiquidCrystal lcd(5, 4, 3, 2, 1, 0);
  void setup() {
    Serial.begin( 115200 );
  lcd.begin(16, 2);
   lcd.setCursor(0,0);
    lcd.print("Robot started");
  pinMode(TRIG_PIN,OUTPUT);
  pinMode(ECHO_PIN,INPUT);
}
void loop()
{
   long duration, distanceCm, distanceIn;
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  duration = pulseIn(ECHO_PIN,HIGH);
 
  // convert the time into a distance
  distanceCm = duration / 29.1 / 2 ;
  distanceIn = duration / 74 / 2;
 
  if (distanceCm <= 0){
    lcd.setCursor(0,1);
    lcd.print("Out of range");
  }
  else {
    lcd.setCursor(0,1);
    lcd.print(distanceCm);
    lcd.print("cm");
 }
  delay(1000);
}
