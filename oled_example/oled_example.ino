#include "ESP_Blockly.h"


int NumLed =60;
int LedPin =15;

void setup() {
  // put your setup code here, to run once:
  oledInit();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  oledSetting(3, 10, 5);
  
  oledPrint("test OLEd");
  


}
