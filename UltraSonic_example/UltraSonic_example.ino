
#include "ESP_Blockly.h"

int NumLed =60;
int LedPin =15;

#define TRIG_PIN 26 // ESP32 pin GIOP26 connected to Ultrasonic Sensor's TRIG pin
#define ECHO_PIN 25 // ESP32 pin GIOP25 connected to Ultrasonic Sensor's ECHO pin



void setup() {
  // put your setup code here, to run once:

  
ultrasoundInit(TRIG_PIN, ECHO_PIN);

}

void loop() {
  // put your main code here, to run repeatedly:

  int s = ultrasound(TRIG_PIN, ECHO_PIN);
}
