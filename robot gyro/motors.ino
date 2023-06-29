#define m1 3 
#define m2 2 
#define m3 5 
#define m4 4
#define pwm1 10
#define pwm2 11
#include <Wire.h>
#include <MPU6050.h>
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
MPU6050 mpu;
float e;
unsigned long timer = 0;
float timeStep = 0.01;
float pitch = 0;
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
void setup() {
Serial.begin(115200);
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(pwm1,OUTPUT);
pinMode(pwm2,OUTPUT);
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  while(!mpu.begin(MPU6050_SCALE_2000DPS, MPU6050_RANGE_2G)){
    Serial.println("Could not find a valid MPU6050 sensor, check wiring!");
    delay(500);
  }
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  
  mpu.calibrateGyro();
  mpu.setThreshold(3);
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
void loop() {
timer = millis();
Vector norm = mpu.readNormalizeGyro();
 pitch = pitch + norm.YAxis * timeStep;
  e = 0 - pitch;
  float u =  40 * e;
  motor(u);
  Serial.println("pitch ="); 
  Serial.println(pitch);
  delay((timeStep*1000) - (millis() - timer));
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
void motor(float pwm){
  if(pwm > 255){
    pwm = 255;}
  if(pwm < (-255) ){
    pwm = (-255);}
    if(pwm > 255){
    pwm = 255;}
  if(pwm < (-255) ){
    pwm = (-255);}  
   if(pwm > 0){
    digitalWrite(m1,HIGH); 
    digitalWrite(m2,LOW);
    digitalWrite(m3,HIGH); 
    digitalWrite(m4,LOW);
    analogWrite(pwm1,pwm); 
    analogWrite(pwm2,pwm); 
    Serial.println(pwm); 
    } else if(pwm < 0){
    pwm = pwm *(-1);
    digitalWrite(m1,LOW); 
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW); 
    digitalWrite(m4,HIGH);
    analogWrite(pwm1,pwm); 
    analogWrite(pwm2,pwm); 
    Serial.println(pwm); 
    } else if(pwm == 0){
    digitalWrite(m1,LOW); 
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW); 
    digitalWrite(m4,LOW);
    analogWrite(pwm1,0); 
    analogWrite(pwm2,0);   
    Serial.println(pwm);   
  }
}

