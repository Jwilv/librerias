#include <Potenciometro.h>
#include <Arduino.h>


POTENCIOMETRO :: POTENCIOMETRO(int pin){
    this->pin = pin;
}

int POTENCIOMETRO :: GetValor(){
    return analogRead(pin) / limitBits;
}
