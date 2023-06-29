#define SensorPin A0 
#define L1 2
#define L2 3
#define L3 4

float sensorValue = 0;
 
void setup() { 
 Serial.begin(9600); 
 pinMode(L1,OUTPUT);
 pinMode(L2,OUTPUT);
 pinMode(L3,OUTPUT);
} 

void loop() { 
 for (int i = 0; i <= 100; i++){ 
   sensorValue = sensorValue + analogRead(SensorPin); 
   delay(1); 
 } 
 sensorValue = sensorValue/100.0; 
 Serial.println(sensorValue); 
 if (sensorValue > 1020){
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(L3,LOW);
 }else if(sensorValue <= 1020 and sensorValue > 950){
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,LOW); 
 }else{
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(L3,HIGH);
 }
 delay(30); 
} 
