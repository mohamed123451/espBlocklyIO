#include "ESP_Blockly.h"



void setup() {
  // put your setup code here, to run once:
  oledInit();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  oledSetting(3, 10, 5);
  
  oledPrint("test OLEd");
  


}
