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
//************************************************
#define trig 12 //paye ultrasonic
#define echo 11 //paye ultrasonic
//************************************************
#define pot 14 //potanciometer
#define pb 2 // paye kilid
//************************************************
int divar = 0; // moteghayeri ke fasale divar ta robat ro to khodesh bayad brize
long fasle ; // vorudii ke be santimetr fasle ro mige
int pwm ;
//************************************************
void setup() {
  Serial.begin(9600); // baud rate
//************************************************
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(m5, OUTPUT);
  pinMode(m6, OUTPUT);
  pinMode(m7, OUTPUT);
  pinMode(m8, OUTPUT);
  pinMode(trig, OUTPUT); //paye ultrasonic
  pinMode(echo, INPUT); //paye ultrasonic
  pinMode(pb, INPUT); //paye kilid
//************************************************
  attachInterrupt(digitalPinToInterrupt(pb), inter, RISING); }
//************************************************
void loop() {
//************************************************
  int potc = analogRead(pot);
  pwm = potc/4;
  int bs = digitalRead(pb);
  int data ; // vorudi dastnakhordeye ultasonic
//************************************************
  //code ultrasonic
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  data = pulseIn(echo, HIGH);
  fasle = (data / 29.1) / 2 ;
  //code ultrasonic ta inja bud
//************************************************
  Serial.print("fasle = ");
  Serial.println(fasle); //namayesh data ee ke ultrasonic mifreste va tabdil shode be santimetr roye serialmonitor
//************************************************
  if(bs == LOW){
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
  digitalWrite(m5, HIGH);
  digitalWrite(m6, LOW);
  digitalWrite(m7, LOW);
  digitalWrite(m8, HIGH);
  analogWrite(pwm1, pwm);
  analogWrite(pwm2, pwm);
  analogWrite(pwm3, pwm);
  analogWrite(pwm4, pwm);
//************************************************
  //age fasle divar ziad shd motor chapi khamoush shvd age fasle divar kam shd motor rasti khamush bshe
  if (divar > fasle) {
   digitalWrite(m1, HIGH);
   digitalWrite(m2, LOW);
   digitalWrite(m3, HIGH);
   digitalWrite(m4, LOW);
   digitalWrite(m5, LOW);
   digitalWrite(m6, HIGH);
   digitalWrite(m7, LOW);
   digitalWrite(m8, HIGH);
   analogWrite(pwm1, pwm - 30);
   analogWrite(pwm2, pwm - 30);
   analogWrite(pwm3, pwm - 30);
   analogWrite(pwm4, pwm - 30);
  } else if (divar < fasle) {
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, LOW);
    digitalWrite(m4, HIGH);
    digitalWrite(m5, HIGH);
    digitalWrite(m6, LOW);
    digitalWrite(m7, HIGH);
    digitalWrite(m8, LOW);
    analogWrite(pwm1, pwm - 30);
    analogWrite(pwm2, pwm - 30);
    analogWrite(pwm3, pwm - 30);
    analogWrite(pwm4, pwm - 30);
  }}}
//************************************************
// code interupt
void inter() {
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, LOW);
  digitalWrite(m5, LOW);
  digitalWrite(m6, LOW);
  digitalWrite(m7, LOW);
  digitalWrite(m8, LOW);
  analogWrite(pwm1, 0);
  analogWrite(pwm2, 0);
  analogWrite(pwm3, 0);
  analogWrite(pwm4, 0);
  divar = fasle;
  Serial.print("divar = ");
  Serial.println(divar);
}
