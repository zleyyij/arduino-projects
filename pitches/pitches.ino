#include "pitches.h"
const int speaker = 9;
int notes[] {
NOTE_A4, NOTE_E3, NOTE_A4, 0,
NOTE_A4, NOTE_E3, NOTE_A4, 0,
NOTE_E4, NOTE_D4, NOTE_C4, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_C4, NOTE_D4,
NOTE_E4, NOTE_D4, NOTE_C4, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_C4, NOTE_D4,
NOTE_E4, NOTE_E3, NOTE_A4, 0


};

int times[] = {
250, 250, 250, 250,
250, 250, 250, 250,
125, 125, 125, 125, 125, 125, 125 ,125,
250, 250, 250, 250


};



void setup() {
  // put your setup code here, to run once:
for(int i = 0; i < 20; i++){
  tone(speaker, notes[i], times[i]);
  delay(times[i]);
}
}


void loop() {
  // put your main code here, to run repeatedly:

}
