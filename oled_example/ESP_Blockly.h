

/*****************************************************************************************/
/*                            INCLUDES                                                   */
/*****************************************************************************************/
#ifndef ESP_Blockly
#define ESP_Blockly

#include <SPI.h>
#include <Wire.h>
#include <Stepper.h>
//#include <ESP32Servo.h>
#include <Adafruit_GFX.h>
#include <BluetoothSerial.h>
#include <Wire.h>
//#include "SSD1306Wire.h"
#include <Adafruit_NeoPixel.h>
//#include <Robojax_L298N_DC_motor.h>
#include <Adafruit_SSD1306.h>

#include "sound.h"
#include "ledStripLib.h"
#include "motorLib.h"
#include "servoLib.h"
#include "oledLib.h"


#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C /// See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
//Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


//INPUTS 

#define  A0   36 
#define  A1   39 
#define  A2   34 
#define  A3   35 
#define  A4   32 
#define  A5   33 
#define  A6   25 
#define  A7   26 
#define  A8   27  
#define  A9   14  
#define  A10  12  // BUTTON 1
#define  A11  13 //BUTTON 2

//OUTPUTS : with VCC&GND placed at the LEFT edge of the PCB with Male Pins and SMD Soldering pads for the Signal PIN, 2 GND @bottom, 2 VCC @TOP
#define  O0   19 // 
#define  O1   18 // 
#define  O2   5  // 
#define  O3   17 // 
#define  O4   16 //
#define  O5   4  // O9
#define  O6   0  // 
#define  O7   2 // 
#define  O8   15  // 
#define  O9   8  // 
#define  O10  7   // BUZZER 
#define  O11  6  //NEO_STRIP_RGB RGB


//PWM 
#define  PWM0   9  // MOTOR1A DRV8871 
#define  PWM1   10 // MOTOR1B DRV8871 
#define  PWM2   11 //MOTOR2A DRV8871 
#define  PWM3   23 //MOTOR2B DRV8871 


//I2C
// with VCC&GND placed at the MIDDLE of the PCB with Male Pins and SMD Soldering pads 
#define  SDA1   21 //SDA OLED Pin   (SSD1306) at the middle of the board
#define  SCL1   22 //SCL OLED Pin

// UART
// with VCC&GND placed at the TOP edge of the PCB with Male Pins and SMD Soldering pads 
#define  UART0_TX 1    
#define  UART0_RX 3



///////////////////////////////////////////
//////////////// Sound ////////////////////
///////////////////////////////////////////
  void espSingInit(int buzzerPin);
  void espSingTone(int freq, int d);
  void espSing(int melodyNum);



///////////////////////////////////////////
////////////// LedStrip ///////////////////
///////////////////////////////////////////
  void ledStripBegin();
  void colorWipe(char r, char g, char b, unsigned int wait);
  void rainbow(int wait);
  void PixelColor(int led,  char r, char g, char b);



///////////////////////////////////////////
////////////// MotorLib ///////////////////
///////////////////////////////////////////
  void initMotor(int p1, int p2, int ePin, int ch);
  void LeftMotor(int s);
  void RightMotor(int s);




///////////////////////////////////////////
////////////// ServoLib ///////////////////
///////////////////////////////////////////
  void servoInit(int pin);
  void servoAngle(int angel);




///////////////////////////////////////////
////////////// OLED Lib ///////////////////
///////////////////////////////////////////
  void oledInit();
  void oledPrint(char* text);
  void oledSetting(int tSize, int x, int y);




#endif
