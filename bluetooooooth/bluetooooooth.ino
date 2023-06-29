 char junk;
  String inputString="";
   const int m1  = 7;  
   const int m2  = 6;  
   const int m3  = 5;
   const int m4  = 4;  
   const int bz = 2;
 void setup()  {
  Serial.begin(9600); 
    pinMode(m1, OUTPUT);
    pinMode(m2, OUTPUT);
    pinMode(m3, OUTPUT);
    pinMode(m4, OUTPUT); 
    pinMode(bz, OUTPUT); 
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
       digitalWrite(m1,LOW);
       digitalWrite(m2,LOW);
       digitalWrite(m3,LOW);
       digitalWrite(m4,LOW);    
    }else if(inputString == "1"){   
       digitalWrite(m1,HIGH);
       digitalWrite(m2,LOW);
       digitalWrite(m3,LOW);
       digitalWrite(m4,HIGH);
    }else if(inputString == "2"){ 
       digitalWrite(m1,HIGH);
       digitalWrite(m2,LOW);
       digitalWrite(m3,LOW);
       digitalWrite(m4,LOW);  
    }else if(inputString == "3"){ 
       digitalWrite(m1,LOW);
       digitalWrite(m2,HIGH);
       digitalWrite(m3,HIGH);
       digitalWrite(m4,LOW);    
    }else if(inputString == "4"){
       digitalWrite(m1,LOW);
       digitalWrite(m2,LOW);
       digitalWrite(m3,LOW);
       digitalWrite(m4,HIGH);       
    }else if(inputString == "5"){
       digitalWrite(m1,LOW);
       digitalWrite(m2,HIGH);
       digitalWrite(m3,LOW);
       digitalWrite(m4,LOW);       
    }else if(inputString == "6"){
       digitalWrite(m1,LOW);
       digitalWrite(m2,LOW);
       digitalWrite(m3,HIGH);
       digitalWrite(m4,LOW);       
    }else if(inputString == "7"){
       digitalWrite(m1,HIGH);
       digitalWrite(m2,LOW);
       digitalWrite(m3,HIGH);
       digitalWrite(m4,LOW);       
    }else if(inputString == "8"){
       digitalWrite(m1,LOW);
       digitalWrite(m2,HIGH);
       digitalWrite(m3,LOW);
       digitalWrite(m4,HIGH);       
    }else if(inputString == "9"){
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
