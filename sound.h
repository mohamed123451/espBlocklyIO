#include "notes.h"

class soundClass{
  public:
  void espSingInit(int buzzerPin);
  void espSingToneAndSilent(int freq, int d, int silent);
  void bendTones (float initFrequency, float finalFrequency, float prop, long noteDuration, int silentDuration);
  void espSingTone(int freq, int d);
  void singMelody(const double*);
  void espSing(int melodyNum);

  private:
  int buzzerPin;
};

extern soundClass  sound;
