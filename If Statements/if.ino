const int ledPin = 9;
const int buttonPin = 8;

void setup(){
    //defining pin modes of pins 8 and nine
pinMode(ledPin, OUTPUT);
pinmode(buttonPin, INPUT);

}

void loop(){
if(digitalRead(buttonPin) == LOW){
digitalWrite(ledPin, LOW);



}
else{
digitalWrite(ledPin, HIGH);


}

}