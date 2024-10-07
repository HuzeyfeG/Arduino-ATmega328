#include <Servo.h>
#define pot A0

Servo esc;

void setup() {
  esc.attach(9, 1000, 2000);
  // Serial.begin(9600);
}

void loop() {
  esc.write(map(analogRead(pot), 0, 1023, 0, 180));
  // Serial.println(map(analogRead(pot), 0, 1023, 0, 180));
}
