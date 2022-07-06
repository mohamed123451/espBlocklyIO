#include "ESP_Blockly.h"

int NumLed =60;
int LedPin =15;

void setup() {
  // put your setup code here, to run once:

  servoInit(6);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  servoAngle(90);
  

}
