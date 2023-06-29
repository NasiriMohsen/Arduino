#define m1 3 // paye motor
#define m2 4 // paye motor
#define m3 7 // paye motor
#define m4 8 // paye motor
#define m5 16 // paye motor
#define m6 17 // paye motor
#define m7 18 // paye motor
#define m8 19 // paye motor
#define pwm1 5 // paye motor
#define pwm2 6 // paye motor
#define pwm3 9 // paye motor
#define pwm4 10 // paye motor
void setup() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(m5, OUTPUT);
  pinMode(m6, OUTPUT);
  pinMode(m7, OUTPUT);
  pinMode(m8, OUTPUT);
}
void loop() {
   digitalWrite(m1, LOW);
   digitalWrite(m2, HIGH);
   digitalWrite(m3, HIGH);
   digitalWrite(m4, LOW);
   digitalWrite(m5, HIGH);
   digitalWrite(m6, LOW);
   digitalWrite(m7, LOW);
   digitalWrite(m8, HIGH);
   analogWrite(pwm1, 100);
   analogWrite(pwm2, 100);
   analogWrite(pwm3, 100);
   analogWrite(pwm4, 100);
}
