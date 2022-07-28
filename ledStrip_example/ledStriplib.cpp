#include "ledStripLib.h"
#include <Adafruit_NeoPixel.h>

extern int NumLed;
extern int LedPin;



Adafruit_NeoPixel strip = Adafruit_NeoPixel(NumLed, LedPin, NEO_GRB + NEO_KHZ800);


void ledStripClass :: ledStripBegin(){
  strip.begin();
  strip.show();
  strip.setBrightness(50);
}


void ledStripClass :: colorWipe(char r, char g, char b, unsigned int wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(r, g, b));
    strip.show();
    delay(wait);
  }
}


void ledStripClass :: rainbow(int wait) {
  for(long firstPixelHue = 0; firstPixelHue < 5*65536; firstPixelHue += 256) {
    for(int i=0; i<strip.numPixels(); i++) { 
      int pixelHue = firstPixelHue + (i * 65536 / strip.numPixels());
      strip.setPixelColor(i, strip.ColorHSV(pixelHue));
    }
    strip.show();
    delay(wait);
  }
}

void ledStripClass :: PixelColor(int led,  char r, char g, char b){
  strip.setPixelColor(led, strip.Color(r, g, b));
  strip.show();
}
