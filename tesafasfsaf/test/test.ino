int MR_A, MR_B, ML_A, ML_B;
void setup() {
  pinMode(MR_A, OUTPUT);
  pinMode(MR_B, OUTPUT);
  pinMode(ML_A, OUTPUT);
  pinMode(ML_B, OUTPUT);
}
void motors(String str = "stop", int Speed = 255) {
  digitalWrite(MR_A, LOW);
  digitalWrite(MR_B, LOW);
  digitalWrite(ML_A, LOW);
  digitalWrite(ML_B, LOW);
  if (str == "front") {
    analogWrite(MR_A, Speed);
    analogWrite(ML_A, Speed);
  }
  else if (str == "back") {
    analogWrite(MR_B, Speed);
    analogWrite(ML_B, Speed);
  }
  else if (str == "right") {
    analogWrite(ML_A, Speed);
  }
  else if (str == "left") {
    analogWrite(MR_A, Speed);
  }
  else if (str == "frontright") {
    analogWrite(ML_A, Speed);
    analogWrite(MR_A, Speed / 2);
  }
  else if (str == "frontleft") {
    analogWrite(ML_A, Speed / 2);
    analogWrite(MR_A, Speed);
  }
  else if (str == "backright") {
    analogWrite(ML_B, Speed);
    analogWrite(MR_B, Speed / 2);
  }
  else if (str == "backleft") {
    analogWrite(ML_B, Speed / 2);
    analogWrite(MR_B, Speed);
  }
  else if (str == "rotateleft") {
    analogWrite(ML_B, Speed);
    analogWrite(MR_A, Speed);
  }
  else if (str == "rotateright") {
    analogWrite(ML_A, Speed);
    analogWrite(MR_B, Speed);
  }
}
