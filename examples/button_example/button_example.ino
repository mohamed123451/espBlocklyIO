#define PRESSED 1
#define RELEASED 0

//Setup
void setup(){
Serial.begin(115200); //Serial Tx

pinMode(A2, INPUT); //Button
}

//Tasks of Functions

//Main LOOP
void loop()
{
Serial.print("setup done");
if(button(A2,RELEASED))
{
}
}


boolean button(int pin, int state){
  if(state == digitalRead(pin))
    return true;
  else 
    return false;
}
