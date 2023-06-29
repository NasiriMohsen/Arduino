#include <MPU6050_tockn.h>
#include <Wire.h>
#include <Servo.h>

MPU6050 mpu6050(Wire);

#define m1 5
#define m2 6

float AcX,AcY,AcZ,AX,AY,AXE,AYE,GyX,GyY,GyZ,GX,GY,GZ,GXE,GYE,GZE,Temp;
float et,pt,ct;
float rad_to_deg = 180/3.141592654;

float danglex = 0,dangley = 0;
float errorx,errory,perrx,perry,pidx,opx,oix,odx,pidy,opy,oiy,ody;
float P = 0.9,I = 0,D = 0.15; //0.9 , 0.01 , 0.1

int speeed[] = {1000,1000};
int Thrust = 1000;

Servo ESC1;
Servo ESC2;

void setup(){
  ESC1.attach(m1,1000,2000);
  ESC2.attach(m2,1000,2000);

  ct = millis();
  
  Serial.begin(9600);  
  
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);
}

void loop(){
  mpu6050.update();
  
  Thrust = analogRead(A0);
  Thrust = map(Thrust, 0, 1023, 1000, 2000);
  
  pt = ct;
  ct = millis();                        
  et = (ct-pt)/1000;
  
  AX = mpu6050.getAngleX();
  AY = mpu6050.getAngleY();
  AXE = mpu6050.getAccAngleX();
  AYE = mpu6050.getAccAngleY();
  GX = mpu6050.getGyroAngleX();
  GY = mpu6050.getGyroAngleY();

  AX = AX;
  
  
  errorx = AX - danglex;
  errory = AY - dangley;
  errorx = errorx;
  errory = errory;
  opx = P*errorx;
  oix = oix+(I*errorx);  
  odx = D*((errorx-perrx)/et);
  pidx = opx+oix+odx;
  opy = P*errory;
  oiy = oiy+(I*errory);  
  ody = D*((errorx-perry)/et);
  pidy = opy+oiy+ody;

  perrx = errorx;
  perry = errory;

  if(Thrust <= 1000){
    ESC1.writeMicroseconds(1000);
    ESC2.writeMicroseconds(1000);
  }else{
    ESC1.writeMicroseconds(speeed[0]+Thrust-1000-pidx);
    ESC2.writeMicroseconds(speeed[1]+Thrust-1000+pidx);
  }
//--------------------------------------------
  Serial.print(" "); Serial.print(Thrust);
  Serial.print(" Mpu= "); Serial.print(AX);
  Serial.print(" PID: "); Serial.println(pidx); 

}
