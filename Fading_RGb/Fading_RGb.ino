int red = 9;
int soundPin = 0;
int green = 10;
int blue = 11;
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
void setup() {
  Serial.begin(9600);
}
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
void loop() {
  int value = analogRead(soundPin);
  int Sound = map(value, 0, 1023, 0, 8) ;
  Serial.println(Sound);
  if (Sound == 1) {
    analogWrite(red, 255);
    analogWrite(green, 0);
    analogWrite(blue, 0);
  }
  else if (Sound == 2) {
    analogWrite(red, 0);
    analogWrite(green, 255);
    analogWrite(blue, 0);
  }
  else if (Sound == 3) {
    analogWrite(red, 0);
    analogWrite(green, 0);
    analogWrite(blue, 255);
  }
  else if (Sound == 4) {
    analogWrite(red, 255);
    analogWrite(green, 255);
    analogWrite(blue, 0);
  }
  else if (Sound == 5) {
    analogWrite(red, 255);\
    analogWrite(green, 0);
    analogWrite(blue, 255);
  }
  else if (Sound == 6) {
    analogWrite(red, 0);
    analogWrite(green, 255);
    analogWrite(blue, 255);
  }
  else if (Sound == 7) {
    analogWrite(red, 255);
    analogWrite(green, 255);
    analogWrite(blue, 255);
  }
  else if (Sound == 8) {
    analogWrite(red, 250);
    analogWrite(green, 0);
    analogWrite(blue, 0);
  }
  else if (Sound == 0) {
    analogWrite(red, 0);
    analogWrite(green, 0);
    analogWrite(blue, 0);
  }
  //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  delay(10);
}


