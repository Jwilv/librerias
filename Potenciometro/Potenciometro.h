#ifndef Potenciometro_h
#include <Arduino.h>

class POTENCIOMETRO{
    private:
    int pin;
    int limitBits = 4; //para tener un valor max de 255

    public:
    POTENCIOMETRO(int pin);
    int GetValor();

}

#endif
