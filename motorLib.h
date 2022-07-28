#ifndef MOTORLIB_H
#define MOTORLIB_H

#include "Arduino.h"


class motorClass {

  public :
  void initMotor(int pin1, int pin2, int enablePin, int ch);
  void rightMotor(int s);
  void leftMotor(int s);

  int pwm_channel;
  int pin1, pin2, enablePin ;
};



#endif
