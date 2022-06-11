#include "ESP_Blockly.h"

#define beeperPin 13


void setup() {
  
  espSingInit(beeperPin);
      espSingTone(1000, 3200);
      delay(1000);
      espSingTone(5000, 3200);
      delay(1000);

      for (int i=0 ; i<=35 ; i++)
      {
        espSing(i);
        delay(1000);
      }

}

void loop() {  
  
}
