int g = 11;
int y = 10;
int r = 9;
int val = 50;
int valo = 255;
void setup() {  }
void loop() {
analogWrite(g,val);
delay(3000);
analogWrite(g,valo);
analogWrite(y,val);
delay(1000);
analogWrite(y,valo);
analogWrite(r,val);
delay(3000);
analogWrite(r,valo);
analogWrite(y,val);
delay(1000);
analogWrite(y,valo);
}
