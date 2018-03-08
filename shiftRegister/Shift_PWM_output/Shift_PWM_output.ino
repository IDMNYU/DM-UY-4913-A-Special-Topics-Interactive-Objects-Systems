int latchPin = 5;  // 12 on 74HC595
int clockPin = 6;  //11 on 74HC595
int dataPin = 4;  //14 on 74HC595

int outputEnablePin = 11;  // pin 13 on 74HC595

byte leds = 0;

void setup()
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(outputEnablePin, OUTPUT);
}

void loop() {
  //setBrightness(255);
  leds = 0;
  updateShiftRegister();
  delay(2000);
  for (int i = 0; i < 8; i++) {
    bitSet(leds, i);
    updateShiftRegister();
    //delay(50);
  }

  for (byte b = 0; b <= 100; b++) { // up a bit
    setBrightness(b);
    delay(100);
  }
  updateShiftRegister();
  delay(2000);


  // ***** down + up
  for (byte b = 100; b >= 25; b--) { // down a bit
    setBrightness(b);
    delay(10);
  }
  updateShiftRegister();

  for (byte b = 25; b <= 100; b++) { // up a bit
    setBrightness(b);
    delay(10);
  }
  updateShiftRegister();

  for (byte b = 100; b >= 25; b--) { // down a bit
    setBrightness(b);
    delay(10);
  }
  updateShiftRegister();

  for (byte b = 25; b <= 100; b++) { // up a bit
    setBrightness(b);
    delay(10);
  }
  updateShiftRegister();

  for (byte b = 100; b >= 25; b--) { // down a bit
    setBrightness(b);
    delay(10);
  }
  updateShiftRegister();

  for (byte b = 25; b <= 100; b++) { // up a bit
    setBrightness(b);
    delay(10);
  }
  updateShiftRegister();

  for (byte b = 100; b >= 25; b--) { // down a bit
    setBrightness(b);
    delay(10);
  }
  updateShiftRegister();

  for (byte b = 25; b <= 100; b++) { // up a bit
    setBrightness(b);
    delay(10);
  }
  updateShiftRegister();

  delay(4000);

  //**** up a bit more
  for (byte b = 100; b <= 175; b++) { // down a bit
    setBrightness(b);
    delay(10);
  }
  updateShiftRegister();
  delay(4000);

  //**** up even more
  for (byte b = 175; b <= 255; b++) { // down a bit
    setBrightness(b);
    delay(10);
  }
  updateShiftRegister();
  delay(6000);


}

void updateShiftRegister()
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  digitalWrite(latchPin, HIGH);
}

void setBrightness(byte brightness) // 0 to 255
{
  analogWrite(outputEnablePin, 255 - brightness);
}
