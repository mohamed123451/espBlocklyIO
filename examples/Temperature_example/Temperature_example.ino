#include "ESP_Blockly.h"


int PIN_LM35 = 36; // ESP32 pin GIOP36 (ADC0) connected to LM35


void setup(){
  Serial.begin(115200); //Serial Tx
  pinMode(PIN_LM35, INPUT); //Temperature
}

void loop()
{
  // print the temperature in the Serial Monitor:
  Serial.print("Temperature: ");
  Serial.print(temp(PIN_LM35));   // print the temperature in °C
  Serial.print("°C");
}
