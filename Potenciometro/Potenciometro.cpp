#include <Potenciometro.h>
#include <Arduino.h>


POTENCIOMETRO :: POTENCIOMETRO(int pin){
    this->pin = pin;
}

float POTENCIOMETRO :: GetValor(){
    return analogRead(pin) / limitBits;
}
