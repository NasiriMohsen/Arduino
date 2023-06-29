int MR_A = 0;
int MR_B = 1;
int ML_A = 2;
int ML_B = 3;
int MB_A = 4;
int MB_B = 5;
int m4 = 22;
int m5 = 24;
int s1 = A0;
int s2 = A1;
int s3 = A2;
int s4 = A3;
int s5 = A4;
int nz = 600;
int ss1 ;
int ss2 ;
int ss3 ;
int ss4 ;
int ss5 ;
int nzzz ;
int nzz ;

//***************************************************************************************************************
void setup() {
  pinMode(MR_A, OUTPUT);
  pinMode(MR_B, OUTPUT);
  pinMode(ML_A, OUTPUT);
  pinMode(ML_B, OUTPUT);
  pinMode(MB_A, OUTPUT);
  pinMode(MB_B, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(m5, OUTPUT);
  /*
   nz = 0;
   ss1 = analogRead(s1);
   ss2 = analogRead(s2);
   ss3 = analogRead(s3);
   ss4 = analogRead(s4);
   ss5 = analogRead(s5);
   nzzz = ss1 + ss2 + ss3 + ss4 + ss5;
   nzz = nzzz/5;
   nz = nzz + 70;
   Serial.begin(9600);
   */
}
//***************************************************************************************************************
void motors(String str = "stop", int Speed = 255) {
  digitalWrite(MR_A, LOW);
  digitalWrite(MR_B, LOW);
  digitalWrite(ML_A, LOW);
  digitalWrite(ML_B, LOW);
  digitalWrite(MB_A, LOW);
  digitalWrite(MB_B, LOW);
  if (str == "front") {
    analogWrite(MR_B, Speed);
    analogWrite(ML_A, Speed);
  }
  else if (str == "back") {
    analogWrite(MR_A, Speed);
    analogWrite(ML_B, Speed);
  }
  else if (str == "right") {
    analogWrite(ML_A, Speed);
    analogWrite(MB_B, Speed);
    analogWrite(MR_A, 100);
  }
  else if (str == "left") {
    analogWrite(MR_B, Speed);
    analogWrite(MB_A, Speed);
    analogWrite(ML_B, 100);
  }
  else if (str == "frontright") {
    analogWrite(ML_A, Speed);
    analogWrite(MB_B, Speed);
  }
  else if (str == "frontleft") {
    analogWrite(MR_B, Speed);
    analogWrite(MB_A, Speed);
  }
  else if (str == "backright") {
    analogWrite(MR_A, Speed);
    analogWrite(MB_B, Speed / 2);
  }
  else if (str == "backleft") {
    analogWrite(ML_B, Speed);
    analogWrite(MB_A, Speed);
  }
  else if (str == "rotateleft") {
    analogWrite(ML_B, Speed);
    analogWrite(MR_B, Speed);
    analogWrite(MB_B, Speed);
  }
  else if (str == "rotateright") {
    analogWrite(ML_A, Speed);
    analogWrite(MR_A, Speed);
    analogWrite(MB_A, Speed);
  }
}
//***************************************************************************************************************

void loop() {
   int v1 = analogRead(s1);
   int v2 = analogRead(s2);
   int v3 = analogRead(s3);
   int v4 = analogRead(s4);
   int v5 = analogRead(s5);
  
 
  if(nz >= v1 && nz >= v2 && nz >= v3 && nz >= v4 && nz >= v5){
  motors("stop");
  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  }
  else if (nz <= v1 && nz >= v2 && nz >= v3 && nz >= v4 && nz >= v5){
  motors("stop");
  digitalWrite(m4,HIGH);
}else if (nz >= v1 && nz <= v2 && nz >= v3 && nz >= v4 && nz >= v5){
 motors("stop");
 motors("front"); 
}else if(nz >= v1 && nz >= v2 && nz <= v3 && nz >= v4 && nz >= v5){
  motors("stop");
  motors("frontright");
}else if(nz >= v1 && nz >= v2 && nz >= v3 && nz <= v4 && nz >= v5){
  motors("stop");
  motors("rotateright");
}else if(nz >= v1 && nz >= v2 && nz >= v3 && nz >= v4 && nz <= v5){
  motors("stop");
  motors("frontleft");
}else if(nz >= v1 && nz >= v2 && nz >= v3 && nz >= v4 && nz >= v5){
  motors("stop");
}
Serial.print(" v1 =");
Serial.print(v1);
Serial.print(" v2 =");
Serial.print(v2);
Serial.print(" v3 = ");
Serial.print(v3);
Serial.print(" v4 = ");
Serial.print(v4);
Serial.print(" v5 =");
Serial.print(v5);
Serial.print(" nz =");
Serial.println(nz);
} 
