#include "ESP_Blockly.h"

soundClass  sound1; 

  void espSingInit(int buzzerPin){
    sound1.espSingInit(buzzerPin);
  }
  void espSingToneAndSilent(int freq, int d, int silent){
    sound1.espSingToneAndSilent(freq, d, silent);
  }
  void bendTones (float initFrequency, float finalFrequency, float prop, long noteDuration, int silentDuration){
    sound1.bendTones (initFrequency, finalFrequency, prop, noteDuration, silentDuration);
  }
  void espSingTone(int freq, int d){
    sound1.espSingTone(freq, d);
  }
  void singMelody(const double* arr){
    sound1.singMelody(arr);
  }
  void espSing(int melodyNum){
    sound1.espSing(melodyNum);
  }



/////////////Led Strip////////////////
ledStripClass ledStrip1;

int NumLed =60;
int LedPin =15;

  void ledStripBegin(){
    ledStrip1.ledStripBegin();
  }
  void colorWipe(char r, char g, char b, unsigned int wait){
    ledStrip1.colorWipe(r, g, b, wait);
  }
  void rainbow(int wait){
    ledStrip1.rainbow(wait);
  }
  void PixelColor(int led,  char r, char g, char b){
    ledStrip1.PixelColor(led, r, g, b);
  }





/////////////Motr Lib////////////////
motorClass motor1;

  void initMotor(int p1, int p2, int ePin, int ch){
    motor1.initMotor(p1, p2, ePin, ch);
  }
  void LeftMotor(int s){
    motor1.leftMotor(s);
  }
  void RightMotor(int s){
    motor1.rightMotor(s);
  }



  
/////////////Motr Lib////////////////
servoClass servo1;

  void servoInit(int pin){
    servo1.servoInit(pin);
  }
  void servoAngle(int angel){
    servo1.servoAngle(angel);
  }



////////////OLED Lib /////////////////////
oledClass oled1;

  void oledInit(){
    oled1.oledInit();
  }
  void oledPrint(char* text){
    oled1.oledPrint(text);
  }
  void oledSetting(int tSize, int x, int y){
    oled1.oledSetting(tSize, x, y);
  }
