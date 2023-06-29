#include <Wire.h>

const int MPU = 0x68;
int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;
float Acc_angle_x,Acc_angle_y;

void setup(){
  Serial.begin(9600);
  
  Wire.begin();
  Wire.beginTransmission(MPU);
  Wire.write(0x6B); 
  Wire.write(0);    
  Wire.endTransmission(true);
}
void loop(){
  Wire.beginTransmission(MPU);
  Wire.write(0x3B);  
  Wire.endTransmission(false);
  Wire.requestFrom(MPU,14,true);  
  AcX = Wire.read()<<8|Wire.read();    
  AcY = Wire.read()<<8|Wire.read();  
  AcZ = Wire.read()<<8|Wire.read();
  Tmp = Wire.read()<<8|Wire.read();  
  GyX = Wire.read()<<8|Wire.read();  
  GyY = Wire.read()<<8|Wire.read();  
  GyZ = Wire.read()<<8|Wire.read(); 

  Serial.print(" Temp= "); Serial.print(Tmp/340.00+36.53);
  Serial.print(" AX= "); Serial.print(AcX/4096);
  Serial.print(" AY= "); Serial.print(AcY/4096);
  Serial.print(" AZ= "); Serial.print(AcZ/4096); 
  Serial.print(" GX= "); Serial.print(GyX);
  Serial.print(" GY= "); Serial.print(GyY);
  Serial.print(" GZ= "); Serial.println(GyZ);
 
  delay(100);
}
