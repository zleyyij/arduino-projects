
//defing various variables
const int bPin = 9;
const int gPin = 10;
const int rPin = 11;
const int buttonPin = 2;
bool otherButtonVal = LOW;
bool buttonVal = LOW;
int ledMode = 0;

void setup() {
//setting various pinmodes
pinMode(bPin, OUTPUT);
pinMode(gPin, OUTPUT);
pinMode(rPin, OUTPUT);
pinMode(buttonPin, INPUT);
}


void rgbOut(int r, int g, int  b){
  analogWrite(rPin, r);
  analogWrite(bPin, b);
  analogWrite(gPin, g);

}

void loop() {

buttonVal = digitalRead(buttonPin);
//if button value has changed from low to high, increase pin mode
if(buttonVal == HIGH && otherButtonVal == LOW){
  ledMode++;
}
//put in a function for some reason
setMode();


otherButtonVal = buttonVal;


}


void setMode(){

//ensuring looping cycle
if(ledMode >= 8){
ledMode = 0;
}
//switching through each value
switch(ledMode){
  case 1:
    rgbOut(255, 0, 0);
  break;
  case 2:
    rgbOut(0, 255, 0);
  break;
  case 3:
    rgbOut(0, 0, 255);
  break;
  case 4:
    rgbOut(127, 0, 127);
  break;
  case 5:
    rgbOut(0, 127, 127);

  break;
  case 6:
    rgbOut(127, 127, 0);
  break;
  case 7:
    rgbOut(85,85,85);
  break;
  case 0:
    rgbOut(0, 0, 0);
break;
}
}
