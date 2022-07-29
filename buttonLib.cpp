#include "buttonLib.h"


bool button(int pin, int state){
  if(state == digitalRead(pin))
    return true;
  else 
    return false;
}
