#include <Keyboard.h>
#include <KeyboardLayout.h>
#include <Keyboard_da_DK.h>
#include <Keyboard_de_DE.h>
#include <Keyboard_es_ES.h>
#include <Keyboard_fr_FR.h>
#include <Keyboard_it_IT.h>
#include <Keyboard_sv_SE.h>



bool hasSent = false;
void setup() {
Keyboard.begin();
}




void loop() {

if(!hasSent){
  hasSent = true;

Keyboard.print("whee");

}


}
