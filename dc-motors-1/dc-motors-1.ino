const int motorPin = 9;
const int potPin = 0;
int anaVal = 0;

void setup() {
pinMode(motorPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
anaVal = analogRead(potPin);

anaVal = map(anaVal, 0, 1023, 0, 255);
analogWrite(motorPin, anaVal);



}
