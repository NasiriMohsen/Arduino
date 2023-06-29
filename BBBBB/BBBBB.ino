 char junk;
 String inputString="";

const int l1 = 2;
const int l2 = 3;
const int l3 = 4;
const int l4 = 5;
const int l5 = 6;
const int l6 = 7;
const int l7 = 8;
const int l8 = 9;

 void setup()  { 
  
  Serial.begin(9600);  
  
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
  pinMode(l5,OUTPUT);
  pinMode(l6,OUTPUT);
  pinMode(l7,OUTPUT);
  pinMode(l8,OUTPUT);
 
 }
 
 void loop() {
  if(Serial.available()){
   while(Serial.available()){
   char inChar = (char)Serial.read();
   inputString += inChar; }
   Serial.println(inputString '\n');
   while (Serial.available() > 0)  
 { junk = Serial.read() ; }      
  if(inputString == "0"){        
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
  }else if(inputString == "1"){   
  digitalWrite(l1,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
  }else if(inputString == "2"){   
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
  }else if(inputString == "3"){   
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,HIGH);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
  }else if(inputString == "4"){   
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,HIGH);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
  }else if(inputString == "5"){   
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,HIGH);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
  }else if(inputString == "6"){   
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,HIGH);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
  }else if(inputString == "7"){   
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,HIGH);
  digitalWrite(l8,LOW);
  }else if(inputString == "8"){   
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW); 
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,HIGH);
   }
  }
 delay(30);
 }

