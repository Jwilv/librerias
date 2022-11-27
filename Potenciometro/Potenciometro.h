#ifndef Potenciometro_h
#include <Arduino.h>

class POTENCIOMETRO{
    private:
    int pin;

    public:
    POTENCIOMETRO(int pin);
    float GetValor();

}

#endif