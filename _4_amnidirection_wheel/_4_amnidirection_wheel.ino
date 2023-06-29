#include <Servo.h>
char junk;
String input="";
int fm1 = 3;
int bm1 = 2;
int fm2 = 4;
int bm2 = 5;
int fm3 = 6;
int bm3 = 7;
int fm4 = 9;
int bm4 = 8;
Servo kicker;  
void setup() {
Serial.begin(9600);
kicker.attach(10); 
pinMode(fm1,OUTPUT);
pinMode(bm1,OUTPUT);
pinMode(fm2,OUTPUT);
pinMode(bm2,OUTPUT);
pinMode(fm3,OUTPUT);
pinMode(bm3,OUTPUT);
pinMode(fm4,OUTPUT);
pinMode(bm4,OUTPUT);
}
void loop() {
  if(Serial.available()){
  while(Serial.available()){
      char inChar = (char)Serial.read();
      input += inChar;}
    Serial.println(input);
    while (Serial.available() > 0)  {
      junk = Serial.read() ; }
       
     if(input == "s"){
      Stop();        
    }else if(input == "f"){
      forward();  
    }else if(input == "b"){
      backward();  
    }else if(input == "r"){
      right();  
    }else if(input == "l"){
      left();  
    }else if(input == "1"){
      rotateleft();  
    }else if(input == "2"){
      rotateright();  
    }else if(input == "c"){
      backwardright();  
    }else if(input == "z"){
      backwardleft();  
    }else if(input == "e"){
      forwardright();  
    }else if(input == "q"){  
      forwardleft();
    }else if(input == "k
    "){  
      kick();
    }
    input = "";
}
}
void forward(){
analogWrite(fm1,255);    
analogWrite(bm1,0);
analogWrite(fm2,255);    
analogWrite(bm2,0);
analogWrite(fm3,255);    
analogWrite(bm3,0);
analogWrite(fm4,255);    
analogWrite(bm4,0);   
}



void backward(){
analogWrite(fm1,0);    
analogWrite(bm1,255);
analogWrite(fm2,0);    
analogWrite(bm2,255);
analogWrite(fm3,0);    
analogWrite(bm3,255);
analogWrite(fm4,0);    
analogWrite(bm4,255);   
}

void kick(){
  kicker.write(70);
  delay(100);
  kicker.write(0);  
}

void right(){
analogWrite(fm1,255);    
analogWrite(bm1,0);
analogWrite(fm2,0);    
analogWrite(bm2,255);
analogWrite(fm3,255);    
analogWrite(bm3,0);
analogWrite(fm4,0);    
analogWrite(bm4,255); 
}



void left(){
analogWrite(fm1,0);    
analogWrite(bm1,255);
analogWrite(fm2,255);    
analogWrite(bm2,0);
analogWrite(fm3,0);    
analogWrite(bm3,255);
analogWrite(fm4,255);    
analogWrite(bm4,0); 
}



void rotateleft(){
analogWrite(fm1,0);    
analogWrite(bm1,255);
analogWrite(fm2,255);    
analogWrite(bm2,0);
analogWrite(fm3,255);    
analogWrite(bm3,0);
analogWrite(fm4,0);    
analogWrite(bm4,255); 
}



void rotateright(){
analogWrite(fm1,255);    
analogWrite(bm1,0);
analogWrite(fm2,0);    
analogWrite(bm2,255);
analogWrite(fm3,0);    
analogWrite(bm3,255);
analogWrite(fm4,255);    
analogWrite(bm4,0); 
}
void Stop(){
analogWrite(fm1,0);    
analogWrite(bm1,0);
analogWrite(fm2,0);    
analogWrite(bm2,0);
analogWrite(fm3,0);    
analogWrite(bm3,0);
analogWrite(fm4,0);    
analogWrite(bm4,0); 
}
void backwardleft(){
analogWrite(fm1,0);    
analogWrite(bm1,255);
analogWrite(fm2,0);    
analogWrite(bm2,0);
analogWrite(fm3,0);    
analogWrite(bm3,255);
analogWrite(fm4,0);    
analogWrite(bm4,0); 
}
void backwardright(){
analogWrite(fm1,0);    
analogWrite(bm1,0);
analogWrite(fm2,0);    
analogWrite(bm2,255);
analogWrite(fm3,0);    
analogWrite(bm3,0);
analogWrite(fm4,255);    
analogWrite(bm4,0); 
}
void forwardleft(){
analogWrite(fm1,0);    
analogWrite(bm1,0);
analogWrite(fm2,255);    
analogWrite(bm2,0);
analogWrite(fm3,0);    
analogWrite(bm3,0);
analogWrite(fm4,255);    
analogWrite(bm4,0); 
}
void forwardright(){
analogWrite(fm1,255);    
analogWrite(bm1,0);
analogWrite(fm2,0);    
analogWrite(bm2,0);
analogWrite(fm3,255);    
analogWrite(bm3,0);
analogWrite(fm4,0);    
analogWrite(bm4,0); 
}
