//Putting pins in a class for readability when scaling
  const int readPin = 8;
  const int writePin = 9;
  

void setup() {
pinMode(readPin, INPUT);
pinMode(writePin, OUTPUT);
}

void loop() {

digitalWrite(writePin, digitalRead(readPin));
}
