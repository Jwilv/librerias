#ifndef Rele_h
#define Rele_h
#include <Arduino.h>

class RELE
{
private:
int pin;

public:
RELE(int pin);
On();
Off();
}

#endif