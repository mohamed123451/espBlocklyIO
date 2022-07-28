#include "ESP_Blockly.h"





void setup() {

  ledStripBegin();

}

void loop() {
  rainbow(1);
  colorWipe(255, 00, 0, 100);
  PixelColor(1,  0, 0, 0);
  PixelColor(10,  100, 0, 0);
  PixelColor(13,  0, 100, 100);
  PixelColor(21,  100, 0, 100);
  PixelColor(32,  0, 100, 0);
  PixelColor(42,  50, 86, 73);
  delay(1000);

}
