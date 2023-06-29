/*
 Seven segment counter
 makes your seven segment count from 0 to 9 every 1 second 
 Created by: Mohsen Nasiri 
 visit our site: www.fountainofthoughts.net
 */

//Defining pins
int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int g = 7; 
void setup () {
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}
  void loop () {
 // shows number 0 on segement
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(e,HIGH);
   delay(1000);
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(f,LOW);
   digitalWrite(e,LOW);
 // shows number 1 on segement
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   delay(1000);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
 // shows number 2 on segment
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(d,HIGH);
   delay(1000);
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(g,LOW);
   digitalWrite(e,LOW);
   digitalWrite(d,LOW); 
 // shows number 3 on segment
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   delay(1000);
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(g,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
 // shows number 4 on segment   
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   delay(1000);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
 // shows number 5 on segment
   digitalWrite(a,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   delay(1000);
   digitalWrite(a,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
// shows number 6 on segment
   digitalWrite(a,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   delay(1000);
   digitalWrite(a,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
 // shows number 7 on segement
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);    
   digitalWrite(c,HIGH);
   delay(1000);
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
 // shows number 8 on segement   
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH); 
   digitalWrite(g,HIGH);
   delay(1000);
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
 // shows number 9 on segement  
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   delay(1000);
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   delay(1000);
}
   
