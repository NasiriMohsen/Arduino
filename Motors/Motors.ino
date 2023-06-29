//LCD I2C
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
	lcd.begin();
}
//bluetooth HC_05
#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(2, 3);
void setup(){
	Bluetooth.begin(9600);
	Bluetooth.println("Bluetooth Test");
}
//Start twoMotor
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
//Start three *SUN* motors
int MR_A = 3, MR_B = 5, ML_A = 6, ML_B = 9, MB_A = 10, MB_B = 11;
void setup() {
  pinMode(MR_A, OUTPUT);
  pinMode(MR_B, OUTPUT);
  pinMode(ML_A, OUTPUT);
  pinMode(ML_B, OUTPUT);
  pinMode(MB_A, OUTPUT);
  pinMode(MB_B, OUTPUT);
}
void motors(String str = "stop", int Speed = 255) {
  digitalWrite(MR_A, LOW);
  digitalWrite(MR_B, LOW);
  digitalWrite(ML_A, LOW);
  digitalWrite(ML_B, LOW);
  digitalWrite(MB_A, LOW);
  digitalWrite(MB_B, LOW);
  if (str == "front") {
    analogWrite(MR_B, Speed);
    analogWrite(ML_A, Speed);
  }
  else if (str == "back") {
    analogWrite(MR_A, Speed);
    analogWrite(ML_B, Speed);
  }
  else if (str == "right") {
    analogWrite(ML_A, Speed);
    analogWrite(MB_B, Speed);
    analogWrite(MR_A, 100);
  }
  else if (str == "left") {
    analogWrite(MR_B, Speed);
    analogWrite(MB_A, Speed);
    analogWrite(ML_B, 100);
  }
  else if (str == "frontright") {
    analogWrite(ML_A, Speed);
    analogWrite(MB_B, Speed);
  }
  else if (str == "frontleft") {
    analogWrite(MR_B, Speed);
    analogWrite(MB_R, Speed);
  }
  else if (str == "backright") {
    analogWrite(MR_A, Speed);
    analogWrite(MB_B, Speed / 2);
  }
  else if (str == "backleft") {
    analogWrite(ML_B, Speed);
    analogWrite(MB_A, Speed);
  }
  else if (str == "rotateleft") {
    analogWrite(ML_B, Speed);
    analogWrite(MR_B, Speed);
    analogWrite(MB_B, Speed);
  }
  else if (str == "rotateright") {
    analogWrite(ML_A, Speed);
    analogWrite(MR_A, Speed);
    analogWrite(MB_A, Speed);}
}
//four *SUN* motors
int LA_A = 4, LA_B = 5, LB_A = 8, LB_B = 9, RA_A = 2, RA_B = 3, RB_A = 6, RB_B = 7;
void setup() {
	pinMode(RA_A, OUTPUT);
	pinMode(RA_B, OUTPUT);
	pinMode(LA_A, OUTPUT);
	pinMode(LA_B, OUTPUT);
	pinMode(RB_A, OUTPUT);
	pinMode(RB_B, OUTPUT);
	pinMode(LB_A, OUTPUT);
	pinMode(LB_B, OUTPUT);
}
void motors(String str = "stop", int Speed = 255)
{
	digitalWrite(RA_A, LOW);
	digitalWrite(RA_B, LOW);
	digitalWrite(LA_A, LOW);
	digitalWrite(LA_B, LOW);
	digitalWrite(RB_A, LOW);
	digitalWrite(RB_B, LOW);
	digitalWrite(LB_A, LOW);
	digitalWrite(LB_B, LOW);

	if (str == "front") {
		analogWrite(RB_B, Speed);
		analogWrite(LA_A, Speed);
		analogWrite(LB_A, Speed);
	}
	else if (str == "back") {
		analogWrite(RA_A, Speed);
		analogWrite(RB_A, Speed);
		analogWrite(LA_B, Speed);
		analogWrite(LB_B, Speed);
	}
	else if (str == "right") {
		analogWrite(RA_A, Speed);
		analogWrite(RB_B, Speed);
		analogWrite(LA_A, Speed);
		analogWrite(LB_B, Speed);
	}
	else if (str == "left") {
		analogWrite(RA_B, Speed);
		analogWrite(RB_A, Speed);
		analogWrite(LA_B, Speed);
		analogWrite(LB_A, Speed);
	}
	else if (str == "frontright") {
		analogWrite(LA_A, Speed);
		analogWrite(RB_B, Speed);
	}
	else if (str == "frontleft") {
		analogWrite(RA_B, Speed);
		analogWrite(LB_A, Speed);
	}
	else if (str == "backright") {
		analogWrite(RA_A, Speed);
		analogWrite(LB_B, Speed);
	}
	else if (str == "backleft") {
		analogWrite(LA_B, Speed);
		analogWrite(RB_A, Speed);
	}
	else if (str == "rotateleft") {
		analogWrite(RA_B, Speed);
		analogWrite(RB_B, Speed);
		analogWrite(LA_B, Speed);
		analogWrite(LB_B, Speed);
	}
	else if (str == "rotateright") {
		analogWrite(RA_A, Speed);
		analogWrite(RB_A, Speed);
		analogWrite(LA_A, Speed);
		analogWrite(LB_A, Speed);

	}
}
//Start SRF_05
int SRF(int triger, int echo) {
  digitalWrite(triger, LOW);
  delayMicroseconds(2);
  digitalWrite(triger, HIGH);
  delayMicroseconds(10);
  digitalWrite(triger, LOW);
  return pulseIn(echo, HIGH) * 0.0172;
}
//Maximum of four int
int MAXNUM(int ONE, int TWO, int THREE = 0, int FOUR = 0) {
  int a = max(max(ONE, TWO), max(THREE, FOUR));
  if (ONE == a) return 1;
  if (TWO == a) return 2;
  if (THREE == a) return 3;
  if (FOUR == a) return 4;
}