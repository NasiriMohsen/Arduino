  #include <LiquidCrystal.h>
  #include <Servo.h>
   LiquidCrystal lcd(5, 4, 3, 2, 1, 0);
   Servo myservo;   
    int pos1 = 0;
    int pos2 = 0;
    int pos3 = 0;   
    const int motorPin1  = 8;  
    const int motorPin2  = 10;  
    const int motorPin3  = 11;
    const int motorPin4  = 12;  
    const int TRIG_PIN = 6;
    const int ECHO_PIN = 7;
 void setup() {
   myservo.attach(9);  
   lcd.begin(16, 2);
     pinMode(motorPin1, OUTPUT);
     pinMode(motorPin2, OUTPUT);
     pinMode(motorPin3, OUTPUT);
     pinMode(motorPin4, OUTPUT);
     pinMode(TRIG_PIN,OUTPUT);
     pinMode(ECHO_PIN,INPUT);
 }
  void loop(){
 long duration, distanceCm, distanceIn; 
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  duration = pulseIn(ECHO_PIN,HIGH);
  distanceCm = duration / 29.1 / 2 ;
  distanceIn = duration / 74 / 2;
  lcd.clear();
  lcd.print("  Robot started ;)  ");
  lcd.setCursor(0, 1);
    lcd.print("Distance: ");   
    lcd.print(distanceCm);
    lcd.print("cm");   
     if (distanceCm <= 40){
    digitalWrite(motorPin1,LOW);
    digitalWrite(motorPin2,HIGH); 
    digitalWrite(motorPin3,LOW);
    digitalWrite(motorPin4,HIGH);
    delay(5000);
    digitalWrite(motorPin1,HIGH);
    digitalWrite(motorPin2,LOW); 
    digitalWrite(motorPin3,LOW);
    digitalWrite(motorPin4,HIGH);
    delay(1000);
 }
 else { 
    digitalWrite(motorPin1,HIGH);
    digitalWrite(motorPin2,LOW); 
    digitalWrite(motorPin3,HIGH);
    digitalWrite(motorPin4,LOW); 
 }
pos1 = 45;
pos2 = 90;
pos3 = 135;
    myservo.write(pos1);              
    delay(1000);                       
    myservo.write(pos2);           
    delay(1000);                 
    myservo.write(pos3);           
    delay(1000);
    myservo.write(pos2);           
  delay(1000); 
}
