#include <Wire.h>

const int MPU = 0x68;
float AcX,AcY,AcZ,AX,AY,AXE,AYE,GyX,GyY,GyZ,GX,GY,GZ,GXE,GYE,GZE,Temp;
float et,pt,ct;
float rad_to_deg = 180/3.141592654;

void setup(){
  ct = millis();
  Serial.begin(9600);  
  Wire.begin();
  Wire.beginTransmission(MPU);
  Wire.write(0x6B); 
  Wire.write(0);    
  Wire.endTransmission(true);

  for(int i=0;i<200;i++){
    Wire.beginTransmission(0x68);
    Wire.write(0x3B);
    Wire.endTransmission(false);
    Wire.requestFrom(MPU,6,true); 
    
    AcX = Wire.read()<<8|Wire.read();
    AcY = Wire.read()<<8|Wire.read();
    AcZ = Wire.read()<<8|Wire.read();

    AXE = AXE+((atan((AcY/4096)/sqrt(pow((AcX/4096),2)+pow((AcZ/4096),2)))*rad_to_deg));
    AYE = AYE+((atan(-1*(AcX/4096)/sqrt(pow((AcY/4096),2)+pow((AcZ/4096),2)))*rad_to_deg)); 
  
    if(i==199){
      AXE = AXE/200;
      AYE = AYE/200;
    }
  }
  for(int i=0;i<200;i++){
    Wire.beginTransmission(MPU);             
    Wire.write(0x43);          
    Wire.endTransmission(false);
    Wire.requestFrom(MPU,6,true);
         
    GyX=Wire.read()<<8|Wire.read();     
    GyY=Wire.read()<<8|Wire.read();
    GyZ=Wire.read()<<8|Wire.read();
   
    GXE = GXE+(GyX/32.8); 
    GYE = GYE+(GyY/32.8);
    GZE = GZE+(GyZ/32.8);
    
    if(i==199){ 
      GXE = GXE/200;
      GYE = GYE/200;
      GZE = GZE/200;
    }
  }  
}

void loop(){
  pt = ct;
  ct = millis();                        
  et = (ct-pt)/1000;
  
  Wire.beginTransmission(MPU);
  Wire.write(0x3B);  
  Wire.endTransmission(false);
  Wire.requestFrom(MPU,14,true);  
  
  AcX = Wire.read()<<8|Wire.read();    
  AcY = Wire.read()<<8|Wire.read();  
  AcZ = Wire.read()<<8|Wire.read();
  Temp = (Wire.read()<<8|Wire.read())/340.00+36.53;
  GyX = Wire.read()<<8|Wire.read();  
  GyY = Wire.read()<<8|Wire.read();  
  GyZ = Wire.read()<<8|Wire.read(); 
  
  AX = ((atan((AcY/4096)/sqrt(pow((AcX/4096),2)+pow((AcZ/4096),2)))*rad_to_deg))-AXE;
  AY = ((atan(-1*(AcX/4096)/sqrt(pow((AcY/4096),2)+pow((AcZ/4096),2)))*rad_to_deg))-AYE; 

  GX = ((GyX/32.8)-GXE)*et; 
  GY = ((GyY/32.8)-GYE)*et;
  GZ = ((GyZ/32.8)-GZE)*et;

  Serial.print(" AX= "); Serial.print(AX);
  Serial.print(" AY= "); Serial.println(AY);
 
  delay(100);
}
