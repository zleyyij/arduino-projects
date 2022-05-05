#include <Servo.h>

const int servo = 9;
const int pot = 0;

Servo myServo;
int val = 0;




void setup() {
myServo.attach(servo);
}

void loop() {
val = analogRead(pot);
val = map(val, 0, 1023, 0, 179);

myServo.write(val);
delay(15);
}
