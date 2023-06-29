int sound = 0;
void setup() { 
  Serial.begin(9600);
  }
void loop() {
  int Sin = analogRead(sound);
  Serial.println(Sin);
  int topLED = map(Sin, 0, 1023, 0, 10) ;

}
