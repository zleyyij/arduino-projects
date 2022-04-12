const int ledPin = 9;
int n;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  n += 0.00001
  // put your main code here, to run repeatedly:
analogWrite(ledPin, cos(n)*126+126);
}
