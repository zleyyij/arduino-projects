/*
Turn LED on, then off.
*/


//run once
void setup() {
  // initialize LED with mode output
  pinMode(LED_BUILTIN, OUTPUT);
}

// run forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on
  delay(1000);                       // wait
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off
  delay(1000);                       // wait
}
