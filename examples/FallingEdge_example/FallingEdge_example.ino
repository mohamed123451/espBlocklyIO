
int PIN = 18;
int numberKeyPresses = 0;
bool pressed = false;


void IRAM_ATTR isr() {
  numberKeyPresses++;
  pressed = true;
}

void setup() {
  Serial.begin(115200);
  pinMode(PIN, INPUT_PULLUP);
  attachInterrupt(PIN, isr, FALLING);
}

void loop() {
  if (pressed) {
    Serial.printf("Button has been pressed %u times\n", numberKeyPresses);
    pressed = false;
  }
}
