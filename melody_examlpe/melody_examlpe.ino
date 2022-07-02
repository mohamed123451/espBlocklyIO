/*#include "ESP_Blockly.h"

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

*/

//Main libraries
#include "ESP_Blockly.h"

//Setup
void setup(){
Serial.begin(115200); //Serial Tx

espSingInit(13); //Buzzer

}

//Tasks of Functions

//Main LOOP
void loop()
{
  Serial.printf("setup done");
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(22);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(23);
  delay(2000);
  espSing(2);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(3);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(4);
  delay(2000);
  espSing(5);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(6);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(7);
  delay(2000);
  espSing(8);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(9);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(10);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(11);
  delay(2000);
  espSing(12);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(13);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(14);
  delay(2000);
  espSing(15);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(16);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(17);
  delay(2000);
  espSing(18);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(19);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  espSing(20);
  delay(2000); //Delay for 0 hours 0 mins 2 sec 0 ms
  
  
  
}
