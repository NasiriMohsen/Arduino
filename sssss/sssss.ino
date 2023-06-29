 char junk;
 String inputString="";
 int m1 = 2;
 int m2 = 3;
 int m3 = 4;
 int m4 = 5;
 int m5 = 6;
 int m6 = 7;
 int m7 = 8;
 int m8 = 9;
 void setup()  {
  Serial.begin(9600);  
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  pinMode(m5,OUTPUT);
  pinMode(m6,OUTPUT);
  pinMode(m7,OUTPUT);
  pinMode(m8,OUTPUT);
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
   digitalWrite(m1,LOW);
   digitalWrite(m2,LOW);
   digitalWrite(m3,LOW);
   digitalWrite(m4,LOW);
   digitalWrite(m5,LOW);
   digitalWrite(m6,LOW);
   digitalWrite(m7,LOW);
   digitalWrite(m8,LOW);
   }else if(inputString == "f"){   
   digitalWrite(m1,HIGH);
   digitalWrite(m3,HIGH);
   digitalWrite(m5,HIGH);
   digitalWrite(m7,HIGH);
   digitalWrite(m2,LOW);
   digitalWrite(m4,LOW);
   digitalWrite(m6,LOW);
   digitalWrite(m8,LOW);
   }else if(inputString == "b"){   
   digitalWrite(m2,HIGH);
   digitalWrite(m4,HIGH);
   digitalWrite(m6,HIGH);
   digitalWrite(m8,HIGH);
   digitalWrite(m1,LOW);
   digitalWrite(m3,LOW);
   digitalWrite(m5,LOW);
   digitalWrite(m7,LOW);     
   }else if(inputString == "r"){   
   digitalWrite(m1,HIGH);
   digitalWrite(m3,HIGH);
   digitalWrite(m2,LOW);
   digitalWrite(m4,LOW);
   digitalWrite(m5,LOW);
   digitalWrite(m6,LOW);
   digitalWrite(m7,LOW);
   digitalWrite(m8,LOW);      
   }else if(inputString == "l"){   
   digitalWrite(m5,HIGH);
   digitalWrite(m7,HIGH);
   digitalWrite(m2,LOW);
   digitalWrite(m4,LOW);
   digitalWrite(m3,LOW);
   digitalWrite(m6,LOW);
   digitalWrite(m1,LOW);
   digitalWrite(m8,LOW);
   }else if(inputString == "1"){   
   digitalWrite(m1,LOW);
   digitalWrite(m2,HIGH);
   digitalWrite(m3,LOW);
   digitalWrite(m4,HIGH);
   digitalWrite(m5,LOW);
   digitalWrite(m6,LOW);
   digitalWrite(m7,LOW);
   digitalWrite(m8,LOW);
   }else if(inputString == "2"){   
   digitalWrite(m1,LOW);
   digitalWrite(m2,LOW);
   digitalWrite(m3,LOW);
   digitalWrite(m4,LOW);
   digitalWrite(m5,LOW);
   digitalWrite(m6,HIGH);
   digitalWrite(m7,LOW);
   digitalWrite(m8,HIGH);
   }else if(inputString == "3"){   
   digitalWrite(m1,HIGH);
   digitalWrite(m2,LOW);
   digitalWrite(m3,LOW);
   digitalWrite(m4,HIGH);
   digitalWrite(m5,LOW);
   digitalWrite(m6,HIGH);
   digitalWrite(m7,HIGH);
   digitalWrite(m8,LOW);
   }else if(inputString == "4"){   
   digitalWrite(m1,HIGH);
   digitalWrite(m2,LOW);
   digitalWrite(m3,LOW);
   digitalWrite(m4,HIGH);
   digitalWrite(m5,HIGH);
   digitalWrite(m6,LOW);
   digitalWrite(m7,LOW);
   digitalWrite(m8,HIGH);
   }else if(inputString == "5"){   
   digitalWrite(m1,LOW);
   digitalWrite(m2,HIGH);
   digitalWrite(m3,HIGH);
   digitalWrite(m4,LOW);
   digitalWrite(m5,HIGH);
   digitalWrite(m6,LOW);
   digitalWrite(m7,LOW);
   digitalWrite(m8,HIGH);
   }else if(inputString == "6"){   
   digitalWrite(m1,LOW);
   digitalWrite(m2,LOW);
   digitalWrite(m3,LOW);
   digitalWrite(m4,LOW);
   digitalWrite(m5,LOW);
   digitalWrite(m6,LOW);
   digitalWrite(m7,LOW);
   digitalWrite(m8,LOW);
   }else if(inputString == "7"){   
   digitalWrite(m1,LOW);
   digitalWrite(m2,LOW);
   digitalWrite(m3,LOW);
   digitalWrite(m4,LOW);
   digitalWrite(m5,LOW);
   digitalWrite(m6,LOW);
   digitalWrite(m7,LOW);
   digitalWrite(m8,LOW);
   }else if(inputString == "8"){   
   digitalWrite(m1,LOW);
   digitalWrite(m2,LOW);
   digitalWrite(m3,LOW);
   digitalWrite(m4,LOW);
   digitalWrite(m5,LOW);
   digitalWrite(m6,LOW);
   digitalWrite(m7,LOW);
   digitalWrite(m8,LOW);
    }inputString = "";
  }
 }

