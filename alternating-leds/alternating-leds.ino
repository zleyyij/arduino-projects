const int ser = 8;
const int latch = 9;
const int clk = 10;


void setup() {
  pinMode(ser, OUTPUT);
  pinMode(latch, OUTPUT);
  pinMode(clk, OUTPUT);


  digitalWrite(latch, LOW);
  shiftOut(ser, clk, MSBFIRST, B10101010);
  digitalWrite(latch, HIGH);
}

void loop() {
  digitalWrite(latch, LOW);
  shiftOut(ser, clk, MSBFIRST, B01010101);
  digitalWrite(latch, HIGH);
  delay(200);
  digitalWrite(latch, LOW);
  shiftOut(ser, clk, MSBFIRST, B10101010);
  digitalWrite(latch, HIGH);
  delay(200);

}
