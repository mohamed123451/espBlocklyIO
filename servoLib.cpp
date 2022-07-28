#include "servoLib.h"
#include <Servo.h>


Servo myservo;

void servoClass :: servoInit(int pin){
  pinMode(pin, OUTPUT); //Servo
  myservo.attach(pin);
}

void servoClass :: servoAngle(int angle){
  myservo.write(angle);               // tell servo to go to position in variable 'angle'
  delay(15);                          // waits 15ms for the servo to reach the position
}
