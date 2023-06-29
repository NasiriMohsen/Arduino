String data;
int vars[] = {0,0,0,0,0,0,0,0,0};

void setup(){
  Serial.begin(9600);
}

void loop(){
  while(Serial.available()){
    delay(2); 
    char datac = Serial.read();
    data += datac;
  }
  if(data != ""){
    char* delimeter = ",";
    char* token = strtok(data.c_str(),delimeter);
    int counter = 0;
    while( token != NULL ) {
      //Serial.println(atoi(token));
      vars[counter] = atoi(token);
      token = strtok(NULL,delimeter);
      counter++;
    }
  }
  data="";

 Serial.println(vars[0]);

}
