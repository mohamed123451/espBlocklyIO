#include "ESP_Blockly.h"

//Setup
void setup(){
Serial.begin(115200); //Serial Tx

pinMode(12, INPUT); //Button
}

//Tasks of Functions

//Main LOOP
void loop()
{
Serial.print("setup done");
if(button(12,RELEASED))
{
}
}
