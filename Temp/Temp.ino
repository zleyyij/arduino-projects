const int rLed = 11;
const int gLed = 10;
const int bLed = 9;
const int tempPin = 0;



const int lowerBound = 55;
const int upperBound = 56;

 int anaReading = 0;




void setup() {
  pinMode(rLed, OUTPUT);
  pinMode(gLed, OUTPUT);
  pinMode(bLed, OUTPUT);

  //Writing to serial

  Serial.begin(9600);
}

//reducing bulky code
void rgbWrite(bool r, bool g, bool b){
digitalWrite(rLed, r);
digitalWrite(gLed, g);
digitalWrite(bLed, b);

}
void loop() {
  anaReading = analogRead(tempPin);

if(anaReading < lowerBound){
rgbWrite(LOW, LOW, HIGH);
} else if(anaReading > upperBound){
  rgbWrite(HIGH, LOW, LOW);
} else{
  rgbWrite(LOW, HIGH, LOW);
}
Serial.println(anaReading);
delay(500);


}
