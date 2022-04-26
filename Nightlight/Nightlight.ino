//photovoltaic sensor
const int rPin = 9;
const int lightPin = 0;
const int minLight = 200;
const int maxLight = 900;
int lightVal;

void setup() {
  // put your setup code here, to run once:
pinMode(rPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  lightVal = analogRead(lightPin);
  //remapping values to standard 255 and flipped
  lightVal = map(lightVal, minLight, maxLight, 255, 0);

  //writing to led and limiting the val to protect against freak lazer beams
  analogWrite(rPin, constrain(lightVal, 0, 255));
  // put your main code here, to run repeatedly:

}
