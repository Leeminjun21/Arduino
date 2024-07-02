#include <MsTimer2.h>

const int ledPin = 13;
volatile boolean state = true;

void setup()
{
  pinMode(ledPin, OUTPUT);
  MsTimer2::set(500,ledBlink);
  MsTimer2::start();
}

void loop()
{
  //statement1~
  //statement2~
}

void ledBlink()
{
  digitalWrite(ledPin, state);
  state = !state;
}
