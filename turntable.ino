#include <MsTimer2.h>

int dirPin1 = 3;
int stepperPin1 = 2;
int dirPin2 = 7;
int stepperPin2 = 6;

int dly = 100;
int analogPin = A1;

int cnt = 0;
int refCnt = 0;

void motorctrl()
{
  static boolean output = HIGH;

  if ( cnt > refCnt ) {
    cnt = 0;
    digitalWrite(stepperPin1, output);
    //delayMicroseconds(10000);
    output = !output;
  }
  else {
    cnt++;
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(dirPin1, OUTPUT);
  pinMode(stepperPin1, OUTPUT);
  digitalWrite(dirPin1, true);

  MsTimer2::set(1, motorctrl); // 500ms period
  MsTimer2::start();
}

void loop() {
  dly = analogRead(analogPin);
  // Serial.print("입력 값:");
  //Serial.println(dly);

  refCnt = int(dly / 100);
}
