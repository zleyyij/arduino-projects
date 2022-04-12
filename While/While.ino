const int rLed = 10;
const int gLed = 9;
const int bLed = 8;
const int potPin = 1;
int potReading;





void setup() {
pinMode(rLed, OUTPUT);
pinMode(gLed, OUTPUT);
pinMode(bLed, OUTPUT);
Serial.begin(9600);

}

void blink(int ledToBlink, int timeToDelay){
digitalWrite(ledToBlink, HIGH);
delay(timeToDelay);
digitalWrite(ledToBlink, LOW);
delay(timeToDelay);



}

void loop() {

  while(analogRead(potReading) <= 100){
    blink(rLed, 500);
    potReading = analogRead(potPin);
    Serial.println(potReading);
  }
  while(potReading > 100 && potReading <= 700){
    blink(gLed, 500);
    potReading = analogRead(potPin);
    Serial.println(potReading);
  }
  while(potReading > 700){
    blink(bLed, 500);
    potReading = analogRead(potPin);
    Serial.println(potReading);
  }



}
