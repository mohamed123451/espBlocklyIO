#ifndef TEMPERATURE_H
#define TEMPERATURE_H



#include "Arduino.h"

#define ADC_VREF_mV    3300.0 // in millivolt
#define ADC_RESOLUTION 4096.0


float temp(int PIN_LM35);






#endif
