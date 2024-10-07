#include <Servo.h>
#define pot A0

Servo esc;

void setup() {
  // put your setup code here, to run once:
  esc.attach(9, 1000, 2000);
  // Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  esc.write(map(analogRead(pot), 0, 1023, 0, 180));
  // Serial.println(map(analogRead(pot), 0, 1023, 0, 180));
}
