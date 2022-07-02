#ifndef LEDSTRIPLIB
#define LEDSTRIPLIB


class ledStripClass{

  

  public :
  void ledStripBegin();
  void colorWipe(char r, char g, char b, unsigned int wait);
  void rainbow(int wait);
  void PixelColor(int led,  char r, char g, char b);
  
  static int N_led,led_pin;

  
};







#endif
