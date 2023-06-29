//#############################################################################################
int s1 = 0;
int s2 = 1;
int s3 = 7;
int s4 = 8;
int s5 = 2;
int s6 = 3;
int s7 = 4;
int s8 = 11;
int s9 = 12;
int s10 = 13;
int s11 = 14;
int s12 = 15;     
int s13 = 16;
int s14 = 17;
int s15 = 18;
int s16 = 19;
//######################################
int ml1 = 10;
int ml2 = 9;
int mr1 = 5;
int mr2 = 6;
//#############################################################################################
void setup() {
pinMode(s1, INPUT);
pinMode(s2, INPUT);
pinMode(s3, INPUT);
pinMode(s4, INPUT);
pinMode(s5, INPUT);
pinMode(s6, INPUT);
pinMode(s7, INPUT);
pinMode(s8, INPUT);
pinMode(s9, INPUT);
pinMode(s10, INPUT);
pinMode(s11, INPUT);
pinMode(s12, INPUT);
pinMode(s13, INPUT);
pinMode(s14, INPUT);
pinMode(s15, INPUT);
pinMode(s16, INPUT);
//######################################
pinMode(ml1, OUTPUT);
pinMode(ml2, OUTPUT);
pinMode(mr1, OUTPUT);
pinMode(mr2, OUTPUT);
}
//#############################################################################################
void loop() {
int s1s = digitalRead(s1);
int s2s = digitalRead(s2);
int s3s = digitalRead(s3);
int s4s = digitalRead(s4);
int s5s = digitalRead(s5);
int s6s = digitalRead(s6);
int s7s = digitalRead(s7);
int s8s = digitalRead(s8);
int s9s = digitalRead(s9);
int s10s = digitalRead(s10);
int s11s = digitalRead(s11);
int s12s = digitalRead(s12);
int s13s = digitalRead(s13);
int s14s = digitalRead(s14);
int s15s = digitalRead(s15);
int s16s = digitalRead(s16);
//######################################  
 if (s9s == HIGH && s8s == HIGH) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
//###################################### 
}else if (s8s == HIGH && s7s== HIGH) {
 analogWrite(mr1,20);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
//###################################### 
}else if (s7s == HIGH ) {
 analogWrite(mr1,40);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###################################### 
}else if (s7s == HIGH && s6s == HIGH) {
 analogWrite(mr1,60);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###################################### 
}else if (s6s == HIGH ) {
 analogWrite(mr1,100);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###################################### 
}else if (s6s == HIGH && s5s == HIGH) {
 analogWrite(mr1,120);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###################################### 
}else if (s5s == HIGH) {
 analogWrite(mr1,140);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###################################### 
}else if (s5s == HIGH && s4s == HIGH) {
 analogWrite(mr1,160);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###################################### 
}else if (s4s == HIGH) {
 analogWrite(mr1,180);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###################################### 
}else if (s4s == HIGH && s3s == HIGH) {
 analogWrite(mr1,200);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###################################### 
}else if (s3s == HIGH) {
 analogWrite(mr1,220);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###################################### 
}else if (s3s == HIGH && s2s == HIGH) {
 analogWrite(mr1,250);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###################################### 
}else if (s2s == HIGH) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###################################### 
}else if (s2s == HIGH && s1s == HIGH) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,255);
 //###################################### 
}else if (s1s == HIGH) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###################################### 
}else if (s9s == HIGH && s10s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,20);
 analogWrite(ml2,0);
 //###################################### 
}else if (s10s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,40);
 analogWrite(ml2,0);
 //###################################### 
}else if (s10s == HIGH && s11s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,60);
 analogWrite(ml2,0);
 //###################################### 
}else if (s11s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,100);
 analogWrite(ml2,0);
 //###################################### 
}else if (s11s == HIGH && s12s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,120);
 analogWrite(ml2,0);
//###################################### 
}else if (s12s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,140);
 analogWrite(ml2,0); 
  //###################################### 
  }else if (s12s == HIGH && s13s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,160);
 analogWrite(ml2,0);
//######################################
}else if (s13s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,180);
 analogWrite(ml2,0);
//######################################
}else if (s13s == HIGH && s14s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,200);
 analogWrite(ml2,0);
//###################################### 
}else if (s14s == HIGH ) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,220);
 analogWrite(ml2,0);
//###################################### 
}else if (s14s == HIGH && s15s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,250);
 analogWrite(ml2,0);
//######################################  
}else if (s15s == HIGH ) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
//######################################  
}else if (s15s == HIGH && s16s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,255);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
//###################################### 
}else if (s16s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
//////////###################################### 
}else if (s10s == HIGH && s7s == HIGH) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
//######################################
}else if (s11s == HIGH && s6s == HIGH) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
//######################################
}else if (s12s == HIGH && s5s == HIGH) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
//######################################
}else if (s13s == HIGH && s4s == HIGH) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
//######################################
}else if (s14s == HIGH && s3s == HIGH) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
//######################################
}else if (s15s == HIGH && s2s == HIGH) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
//######################################
}else if (s16s == HIGH && s1s == HIGH) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
//######################################
}else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW && s13s == LOW && s14s == LOW && s15s == LOW && s16s == LOW) {
 analogWrite(mr1,230);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,230);
}
}

