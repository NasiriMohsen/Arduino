#define Red 9
#define Green 10
#define Blue 11

#define RedPot A3
#define GreenPot A4
#define BluePot A5

#define Button1 2
#define Button2 3

#define AUXInput A0

#define FreqPot A6

int RedValue;
int GreenValue;
int BlueValue;

int Buttonstate1;
int Buttonstate2;

int AUXValue;
int FilteredAUX;
int AUX;

int FreqPotVal;
int Freqrange;

int Subtract;

long randNumber;

void setup() {
  Serial.begin(9600);
  pinMode(Red,OUTPUT);
  pinMode(Green,OUTPUT);
  pinMode(Blue,OUTPUT);

  pinMode(Button1,INPUT);
  pinMode(Button2,INPUT);

  randomSeed(analogRead(A1));
}
void loop() {
  //Serial.print(Buttonstate1);
  //Serial.println(Buttonstate2);
  Buttonstate1 = digitalRead(Button1);
  Buttonstate2 = digitalRead(Button2);
  
  if(Buttonstate1 == 0 and Buttonstate2 == 0){
    RedValue = analogRead(RedPot);
    GreenValue = analogRead(GreenPot);
    BlueValue = analogRead(BluePot);
    Serial.print(RedValue);
    Serial.print(GreenValue);
    Serial.println(BlueValue);
    RGB(RedValue,GreenValue,BlueValue);    
  }
  else if(Buttonstate1 == 1 and Buttonstate2 == 1){
    RedValue = analogRead(RedPot);
    GreenValue = analogRead(GreenPot);
    BlueValue = analogRead(BluePot);
    Serial.print(RedValue);
    Serial.print(GreenValue);
    Serial.println(BlueValue);
    AUX = abs(GetAUX());
    Subtract = 170*(6-AUX);
    if(AUX != 0){
      RGB(Checker(RedValue-Subtract),Checker(GreenValue-Subtract),Checker(BlueValue-Subtract));   
    }
    else{
      RGB(0,0,0);
    }
  }
  else if(Buttonstate1 == 1 and Buttonstate2 == 0){
    Serial.println(AUX);
    AUX = abs(GetAUX());
    if(AUX >= 5){
      RGB_Music(randNumber,0);
    }
    if(AUX == 2){
      randNumber = random(0,12);
    }
    if(AUX <= 4){
      RGB_Music(randNumber,256*(4-AUX));
    }
  }
  else if(Buttonstate1 == 0 and Buttonstate2 == 1){
    Serial.println(AUX);
    AUX = abs(GetAUX());
    if(AUX >= 5){
      randNumber = random(0,12);
      RGB_Music(randNumber,0);
    }
    else if(AUX <= 4){
      RGB_Music(randNumber,256*(4-AUX));
    }
  }
}

void RGB(int R,int G,int B){
  R = map(R,0,1024,0,255);
  G = map(G,0,1024,0,255);
  B = map(B,0,1024,0,255);
  analogWrite(Red,R);
  analogWrite(Green,G);
  analogWrite(Blue,B);  
}
void RGB_Music(int Case,int Sub){
  if(Case == 0){
    RGB(1024-Sub,1024-Sub,1024-Sub);
  }
  else if(Case == 1){
    RGB(0,0,1024-Sub);
  }
  else if(Case == 2){
    RGB(1024-Sub,0,0);
  }
  else if(Case == 3){
    RGB(0,1024-Sub,0);
  }
  else if(Case == 4){
    RGB(0,1024-Sub,1024-Sub);
  }
  else if(Case == 5){
    RGB(1024-Sub,1024-Sub,0);
  }
  else if(Case == 6){
    RGB(1024-Sub,0,1024-Sub);
  }
  else if(Case == 7){
    RGB(512-Sub,1024-Sub,1024-Sub);
  }
  else if(Case == 8){
    RGB(1024-Sub,512-Sub,1024-Sub);
  }
  else if(Case == 9){
    RGB(1024-Sub,1024-Sub,512-Sub);
  }
  else if(Case == 10){
    RGB(512-Sub,512-Sub,1024-Sub);
  }
  else if(Case == 11){
    RGB(512-Sub,1024-Sub,512-Sub);
  }
  else if(Case == 12){
    RGB(1024-Sub,512-Sub,512-Sub);
  }
}
int GetAUX(){
  AUXValue = analogRead(AUXInput);
  FreqPotVal = analogRead(FreqPot);
  Freqrange = map(FreqPotVal,0,1024,0,100);
  FilteredAUX = map(AUXValue,150,300+Freqrange,0,6);
  return FilteredAUX;
}
int Checker(int X){
  if(X <= 0){
    return 0; 
  }else{
    return X;
  }
  
}
