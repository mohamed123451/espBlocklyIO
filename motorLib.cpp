#include "motorLib.h"

void motorClass :: initMotor(int p1, int p2, int ePin, int ch){
  // sets the pins as outputs:
  pin1 = p1;
  pin2 = p2;
  enablePin = ePin;
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(enablePin, OUTPUT);
  
  // configure channel,  freq,  resolution
  pwm_channel = ch;
  ledcSetup(pwm_channel, 30000, 8);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(enablePin, pwm_channel);

}


void motorClass :: rightMotor(int s){
  
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH); 
  ledcWrite(pwm_channel, s);

}


void motorClass :: leftMotor(int s){
  
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW); 
  ledcWrite(pwm_channel, s);

}
