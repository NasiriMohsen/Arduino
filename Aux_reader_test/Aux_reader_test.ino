void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0);
  int filteredval = map(val,150,300,0,3);

  Serial.println(filteredval);
}
