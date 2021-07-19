#include "DigiKeyboard.h"
int BUTTONstate = 0;
void setup() {
 
  pinMode(0, OUTPUT); 
  pinMode(1, INPUT); 
  DigiKeyboard.sendKeyStroke(0);
}
 
 
void loop() {
 
 
  BUTTONstate = digitalRead(1);
  if (BUTTONstate == HIGH)
  {
 
    DigiKeyboard.println("sudo reboot now");
    DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
    DigiKeyboard.delay(1000);
 
    for(int i = 0; i<20; i++){
      digitalWrite(0, HIGH);
      delay(100);
      digitalWrite(0, LOW);
      delay(100);
    }
  } 
 
  else{
 
  }
  digitalWrite(0, LOW);
 
}
