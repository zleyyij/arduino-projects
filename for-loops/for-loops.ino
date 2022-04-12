const int ledPin = 9;



void setup() {
//setting led pin to outpput
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0; i<256; i++){
  analogWrite(ledPin, i);
  delay(10);
}
for(int i=255; i >=0; i--){
analogWrite(ledPin, i);
delay(10);


}

}
