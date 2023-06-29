
float SRF(int triger, int echo) {
  digitalWrite(triger, HIGH);
  delayMicroseconds(10);
  digitalWrite(triger, LOW);
  return (float)pulseIn(echo, HIGH) * 0.0172;
}
//Maximum of four int
int MAXNUM(int ONE, int TWO, int THREE = 0, int FOUR = 0) {
  int a = max(max(ONE, TWO), max(THREE, FOUR));
  if (ONE == a) return 1;
  if (TWO == a) return 2;
  if (THREE == a) return 3;
  if (FOUR == a) return 4;
}
