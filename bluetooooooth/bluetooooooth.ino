 String inputString="";
//************************************************** 
void setup(){
 Serial.begin(9600);   }
//**************************************************  
 void loop() {
  if(Serial.available()){
   while(Serial.available()){
      char inChar = (char)Serial.read();
      inputString += inChar;
    }
     Serial.println(inputString);
       
    inputString = "";
  }
}
