const int buttonPin = 2;  
const int buttonPin2 = 3;     
const int ledPin =  13;      
int buttonState = 0;
int buttonState2 = 0;
        
void setup() {
 pinMode(ledPin, OUTPUT);
   pinMode(buttonPin, INPUT);
   pinMode(buttonPin2, INPUT);

}
void loop() {
  buttonState = digitalRead(buttonPin);  
  buttonState2 = digitalRead(buttonPin2);  
  if (buttonState2 && buttonState  == HIGH) {
   
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
