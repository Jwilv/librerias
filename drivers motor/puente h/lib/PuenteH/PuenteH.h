#ifndef Puente_h
#define Puente_h
#include <Arduino.h>

class Motor{
    private:
    int _in1,_in2,_ena,_in3,_in4,_enb;
    int pines[6] = {_in1,_in2,_ena,_in3,_in4,_enb};

    public:
    Motor(int in1,int in2,int ena,int in3,int in4,int enb);
    void monoAdelante(int in1, int in2, int ena,int velocidad);
    void monoAtras(int in1, int in2, int ena,int velocidad);
    void GiroDerecha(int velocidad);
    void GiroIzquierda(int velocidad);
    void Retroceder(int velocidad);
    void frenado();
    void Motor::avanzar(int velocidad);
};

#endif