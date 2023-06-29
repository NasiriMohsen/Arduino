const int led = 13;
const int TRIG_PIN = 10;
const int ECHO_PIN = 11;
 
void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(TRIG_PIN,OUTPUT);
  pinMode(ECHO_PIN,INPUT);
}
 
void loop()
{
digitalWrite(led,HIGH);
   long duration, distanceCm, distanceIn;
 
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
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
    Serial.println("Out of range");
  }
  else {
    Serial.print(distanceIn);
    Serial.print("in, ");
    Serial.print(distanceCm);
    Serial.print("cm");
    Serial.println(); 
 }
 if (distanceCm <= 15){
  digitalWrite(led,LOW);
 }
 else { 
  digitalWrite(led,HIGH);
 }
  delay(10);
}
