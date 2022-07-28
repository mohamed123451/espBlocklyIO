#ifndef OLEDLIB_H
#define OLEDLIB_H


class oledClass{
  public:
    int textSize = 2;
    int xPos = 1;
    int yPos = 1;
    
    void oledInit();
    void oledPrint(char* text);
    void oledSetting(int tSize, int x, int y);
};




#endif
