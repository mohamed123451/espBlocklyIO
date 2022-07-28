#include "oledLib.h"

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C /// See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);



void oledClass :: oledInit(){

  
  Serial.begin(9600);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  // Show initial display buffer contents on the screen --
  // the library initializes this with an Adafruit splash screen.
  display.display();
  delay(2000); // Pause for 2 seconds

  display.clearDisplay();                 // clear display
  display.setTextSize(2);                 // set text size
  display.setTextColor(WHITE, BLACK);     // set text color

  
}

void oledClass :: oledPrint(char* text){
  
  display.setTextSize(textSize);
  display.setCursor(xPos, yPos);      // set position to display
  display.println(text);              // set text
  display.display();                  // display on OLED

  delay(500);
}

void oledClass :: oledSetting(int tSize, int x, int y){
  textSize = tSize;
  xPos = x;
  yPos = y;
}
