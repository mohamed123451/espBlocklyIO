#include "UltraSonicLib.h"


void ultrasoundInit(int TRIG_PIN, int ECHO_PIN){
  pinMode(TRIG_PIN, OUTPUT); // config trigger pin to output mode
  pinMode(ECHO_PIN, INPUT);  // config echo pin to input mode
}



float ultrasound(int TRIG_PIN, int ECHO_PIN){
  float duration_us, distance_cm;
  
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // measure duration of pulse from ECHO pin
  duration_us = pulseIn(ECHO_PIN, HIGH);

  // calculate the distance
  distance_cm = 0.017 * duration_us;

  return distance_cm ;
}
