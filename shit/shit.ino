//#############################################################################################
int s1 = 19;
int s2 = 18;
int s3 = 17;
int s4 = 16;
int s5 = 15;
int s6 = 14;
int s7 = 13;
int s8 = 12;
int s9 = 11;
int s10 = 4;
int s11 = 3;
int s12 = 2;     
//######################################
int s1s = 0;
int s2s = 0;
int s3s = 0;
int s4s = 0;
int s5s = 0;
int s6s = 0;
int s7s = 0;
int s8s = 0;
int s9s = 0;
int s10s = 0;
int s11s = 0;
int s12s = 0;
//######################################
int ml1 = 10;
int ml2 = 9;
int mr1 = 7;
int mr2 = 8;
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
//######################################
pinMode(ml1, OUTPUT);
pinMode(ml2, OUTPUT);
pinMode(mr1, OUTPUT);
pinMode(mr2, OUTPUT);
}
//#############################################################################################
void loop() {
s1s = digitalRead(s1);
s2s = digitalRead(s2);
s3s = digitalRead(s3);
s4s = digitalRead(s4);
s5s = digitalRead(s5);
s6s = digitalRead(s6);
s7s = digitalRead(s7);
s8s = digitalRead(s8);
s9s = digitalRead(s9);
s10s = digitalRead(s10);
s11s = digitalRead(s11);
s12s = digitalRead(s12); 
//#####################6##7###############  
if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == HIGH && s7s == HIGH && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
 //###################7###################  
}else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == HIGH && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,235);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0);
 //##################6####################  
}else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == HIGH && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,255);
 analogWrite(mr2,0);
 analogWrite(ml1,235);
 analogWrite(ml2,0);
 //##############6##5######################  
}else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == HIGH && s6s == HIGH && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,245);
 analogWrite(mr2,0);
 analogWrite(ml1,210);
 analogWrite(ml2,0);
 //#############5#########################  
}else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == HIGH && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,245);
 analogWrite(mr2,0);
 analogWrite(ml1,195);
 analogWrite(ml2,0);
 //#########5##4###########################  
 }else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == HIGH && s5s == HIGH && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,245);
 analogWrite(mr2,0);
 analogWrite(ml1,170);
 analogWrite(ml2,0);
 //########4##############################  
 }else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == HIGH && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,245);
 analogWrite(mr2,0);
 analogWrite(ml1,145);
 analogWrite(ml2,0);
 //#################4#3####################  
 }else if (s1s == LOW && s2s == LOW && s3s == HIGH && s4s == HIGH && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,245);
 analogWrite(mr2,0);
 analogWrite(ml1,120);
 analogWrite(ml2,0);
 //##################3####################  
 }else if (s1s == LOW && s2s == LOW && s3s == HIGH && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,245);
 analogWrite(mr2,0);
 analogWrite(ml1,95);
 analogWrite(ml2,0);
 //###############3#2######################  
 }else if (s1s == LOW && s2s == HIGH && s3s == HIGH && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,245);
 analogWrite(mr2,0);
 analogWrite(ml1,70);
 analogWrite(ml2,0);
 //##############2########################  
 }else if (s1s == LOW && s2s == HIGH && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,245);
 analogWrite(mr2,0);
 analogWrite(ml1,45);
 analogWrite(ml2,0);
 //##############1#2#######################  
 }else if (s1s == HIGH && s2s == HIGH && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,245);
 analogWrite(mr2,0);
 analogWrite(ml1,20);
 analogWrite(ml2,0);
 //##############1########################  
 }else if (s1s == HIGH && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,245);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,0);
 //###########7#8##########################  
 }else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == HIGH && s8s == HIGH && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,220);
 analogWrite(mr2,0);
 analogWrite(ml1,245);
 analogWrite(ml2,0);
 //##########8############################  
 }else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == HIGH && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,195);
 analogWrite(mr2,0);
 analogWrite(ml1,245);
 analogWrite(ml2,0);
 //######8##9##############################  
 }else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == HIGH && s9s == HIGH && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,170);
 analogWrite(mr2,0);
 analogWrite(ml1,245);
 analogWrite(ml2,0);
 //#####9#################################  
 }}else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == HIGH && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,145);
 analogWrite(mr2,0);
 analogWrite(ml1,245);
 analogWrite(ml2,0);
 //##############9###########10#############  
 }else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == HIGH && s10s == HIGH && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,120);
 analogWrite(mr2,0);
 analogWrite(ml1,245);
 analogWrite(ml2,0);
 //####################10##################  
 }else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == HIGH&& s11s == LOW && s12s == LOW) {
 analogWrite(mr1,95);
 analogWrite(mr2,0);
 analogWrite(ml1,245);
 analogWrite(ml2,0);
 //##############10##11###################### 
 }else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == HIGH && s11s == HIGH && s12s == LOW) {
 analogWrite(mr1,70);
 analogWrite(mr2,0);
 analogWrite(ml1,245);
 analogWrite(ml2,0);
 //#######################11###############  
 }else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == HIGH && s12s == LOW) {
 analogWrite(mr1,45);
 analogWrite(mr2,0);
 analogWrite(ml1,245);
 analogWrite(ml2,0);
 //##################11##12##################  
 }else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == HIGH && s12s == HIGH) {
 analogWrite(mr1,20);
 analogWrite(mr2,0);
 analogWrite(ml1,245);
 analogWrite(ml2,0);
 //############12##########################  
 }else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == HIGH) {
 analogWrite(mr1,0);
 analogWrite(mr2,0);
 analogWrite(ml1,245);
 analogWrite(ml2,0);
//###############none#######################
}else if (s1s == LOW && s2s == LOW && s3s == LOW && s4s == LOW && s5s == LOW && s6s == LOW && s7s == LOW && s8s == LOW && s9s == LOW && s10s == LOW && s11s == LOW && s12s == LOW) {
 analogWrite(mr1,200);
 analogWrite(mr2,0);
 analogWrite(ml1,0);
 analogWrite(ml2,200);
//######################################
 else
 analogWrite(mr1, 255);
 analogWrite(mr2,0);
 analogWrite(ml1,255);
 analogWrite(ml2,0); 

 }
}
