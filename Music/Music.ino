#include "pitches.h"
const int speaker = 9;
int notes[] {
A4,  D4,  E4,  F4,  G4,  F4,  E4,  D4,   0,  D4,   F4,  A4,   G4,   F4,   E4,   0,   E4,   F4,  G4, A4,  F4,   D4,   0,  D4, 0
};
int times[] = {
200, 200, 150, 200, 200, 150, 150, 300, 100, 150, 300, 300,  150,  150,  300,   50,  200,  200, 200, 300, 200,200, 50, 200,  1000000000


};



void setup() {
  // put your setup code here, to run once:
for(int i = 0; i < sizeof(notes); i++){
  tone(speaker, notes[i], times[i]);
  delay(times[i]);
}

}


void loop() {
  // put your main code here, to run repeatedly:

}
