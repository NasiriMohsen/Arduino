 char junk;
 String inputString="";
 int m1 = 2;
 int m2 = 4;
 int m3 = 3;
 int m4 = 5;
 int m5 = 6;
 int m6 = 9;
 void setup()  {
  Serial.begin(9600);   
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  pinMode(m5,OUTPUT);
  pinMode(m6,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
    }
 void loop() {
  if(Serial.available()){
   while(Serial.available()){
   char inChar = (char)Serial.read();
   inputString += inChar; }
   Serial.println(inputString);
   while (Serial.available() > 0)  
   { junk = Serial.read() ; }      
       if(inputString == "0"){         
   analogWrite(m1,0);
   analogWrite(m2,0);
   analogWrite(m3,0);
   analogWrite(m4,0);
   analogWrite(m5,0);
   analogWrite(m6,0);
   }else if(inputString == "f"){   
   analogWrite(m1,0);
   analogWrite(m2,0);
   analogWrite(m3,255);
   analogWrite(m4,0);
   analogWrite(m5,255);
   analogWrite(m6,0);
   }else if(inputString == "b"){   
   analogWrite(m1,0);
   analogWrite(m2,0);
   analogWrite(m3,0);
   analogWrite(m4,255);
   analogWrite(m5,0);
   analogWrite(m6,255);
   }else if(inputString == "l"){   
   analogWrite(m1,0);
   analogWrite(m2,0);
   analogWrite(m3,0);
   analogWrite(m4,255);
   analogWrite(m5,255);
   analogWrite(m6,0);
   }else if(inputString == "r"){   
   analogWrite(m1,0);
   analogWrite(m2,0);
   analogWrite(m3,255);
   analogWrite(m4,0);
   analogWrite(m5,0);
   analogWrite(m6,235);
   }else if(inputString == "q"){
   analogWrite(m1,255);
   analogWrite(m2,0);
   analogWrite(m3,0);
   analogWrite(m4,0);
   analogWrite(m5,0);
   analogWrite(m6,0);  
   }else if(inputString == "e"){
   analogWrite(m1,0);
   analogWrite(m2,255);
   analogWrite(m3,0);
   analogWrite(m4,0);
   analogWrite(m5,0);
   analogWrite(m6,0);  
   }inputString = "";
  }
 }

