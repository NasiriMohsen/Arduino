int ldr = A0;
void setup() {
Serial.begin(9600);
}
void loop() {
int data = analogRead(ldr);
Serial.write(data);
delay(100);
}



