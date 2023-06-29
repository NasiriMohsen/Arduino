#define trigPin 12
#define echoPin 11
int M1 = 2;
int M2 = 3;
int M3 = 4;
int M4 = 5;

void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(M1, OUTPUT);
pinMode(M2, OUTPUT);
pinMode(M3, OUTPUT);
pinMode(M4, OUTPUT);
}

void loop () {
  int duration, distance;
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(1000);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if (distance >= 80 || distance <= 0){
Serial.println("no object detected");
digitalWrite(M1,HIGH);
digitalWrite(M2,HIGH);
}
else {
  Serial.println("objecct detected");
  digitalWrite(M1,HIGH);
  digitalWrite(M2,LOW);
  delay (5000);
  digitalWrite(M2,HIGH);
  digitalWrite(M1,HIGH);
  delay (300)
}
  
