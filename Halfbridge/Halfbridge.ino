//halfbridge enable
const int hbE = 9;
//motor control
const int mc1 = 2;
const int mc2 = 3;
const int potPin = 0;
int val = 0;
int velocity = 0;


void setup() {
  Serial.begin(9600);
pinMode(hbE, OUTPUT);
pinMode(mc1, OUTPUT);
pinMode(mc2, OUTPUT);
pinMode(potPin, INPUT);
//set motor position to 0 when started
brake();
}

void loop() {
  val = analogRead(potPin);

  if(val > 562){
    velocity = map(val, 563, 1023, 0, 255);
    forward(velocity);
  } else if(val < 462){
    velocity = map(val, 461, 0, 0, 255);
    reverse(velocity);
  }
  else{
    brake();

  }
}

void forward(int rate){
analogWrite(hbE, rate);
digitalWrite(mc1, HIGH);
digitalWrite(mc2, LOW);


}
void reverse(int rate){
analogWrite(hbE, rate);
digitalWrite(mc1, HIGH);
digitalWrite(mc2, LOW);
}
void brake(){

  digitalWrite(hbE, LOW);
}


