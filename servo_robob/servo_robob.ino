#include <Servo.h>
Servo myservo;
 char junk;
  String inputString="";
int bz = 8;
int p1 = 15;
int p2 = 35;
int p3 = 55;
int p4 = 75;
int p5 = 95;
int p6 = 115;
int p7 = 135;
int p8 = 155;
 void setup()  {
  Serial.begin(9600); 
    pinMode(bz, OUTPUT); 
    myservo.attach(9);
    }
 void loop() {
  if(Serial.available()){
   while(Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }
     Serial.println(inputString);
     while (Serial.available() > 0)  
     { junk = Serial.read() ; }      
     if(inputString == "0"){         
        digitalWrite(bz,LOW);
    }else if(inputString == "2"){ 
     myservo.write(p1);
    }else if(inputString == "3"){ 
     myservo.write(p2);   
    }else if(inputString == "4"){
     myservo.write(p3);
    }else if(inputString == "5"){
        myservo.write(p4);
    }else if(inputString == "6"){
         myservo.write(p5);
    }else if(inputString == "7"){
            myservo.write(p6);
    }else if(inputString == "8"){       
         myservo.write(p7);
    }else if(inputString == "9"){       
         myservo.write(p8);
    }else if(inputString == "1"){
    digitalWrite(bz,HIGH);
    delay(300);
    digitalWrite(bz,LOW);
   delay(100);
      digitalWrite(bz,HIGH);
    delay(300);
    digitalWrite(bz,LOW);
   delay(100);
     digitalWrite(bz,HIGH);
    delay(300);
    digitalWrite(bz,LOW);
   delay(100);
     digitalWrite(bz,HIGH);
    delay(300);
    digitalWrite(bz,LOW);
   delay(100);
     digitalWrite(bz,HIGH);
    delay(300);
    digitalWrite(bz,LOW);
   delay(100);
     digitalWrite(bz,HIGH);
    delay(300);
    digitalWrite(bz,LOW);
    }
    inputString = "";
  }
}
