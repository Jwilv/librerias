#include <Arduino.h>
#include "PuenteH.h"

Motor::Motor(int in1, int in2, int ena, int in3, int in4, int enb)
{
    _in1 = in1, _in2 = in2, _in3 = in3, _ena = ena, _in4 = in4, _enb = enb;
    for (int i; i < 5; i++)
    {
        int pinMotor = pines[i];
        pinMode(pinMotor, OUTPUT);
    }
}
void Motor::monoAdelante(int in1, int in2, int ena, int velocidad)
{
    analogWrite(ena, velocidad);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
}
void Motor::monoAtras(int in1, int in2, int ena, int velocidad)
{
    analogWrite(ena, velocidad);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
}
void Motor::GiroDerecha(int velocidad)
{
    analogWrite(_ena, velocidad);
    digitalWrite(_in1, HIGH);
    digitalWrite(_in2, LOW);

    analogWrite(_enb, velocidad);
    digitalWrite(_in3, LOW);
    digitalWrite(_in4, HIGH);
}
void Motor::GiroIzquierda(int velocidad)
{
    analogWrite(_ena, velocidad);
    digitalWrite(_in1, LOW);
    digitalWrite(_in2, HIGH);

    analogWrite(_enb, velocidad);
    digitalWrite(_in3, HIGH);
    digitalWrite(_in4, LOW);
}
void Motor::Retroceder(int velocidad)
{
    analogWrite(_ena, velocidad);
    digitalWrite(_in1, HIGH);
    digitalWrite(_in2, LOW);

    analogWrite(_enb, velocidad);
    digitalWrite(_in3, HIGH);
    digitalWrite(_in4, LOW);
}
void Motor::frenado()
{
    analogWrite(_ena, 0);
    digitalWrite(_in1, LOW);
    digitalWrite(_in2, HIGH);

    analogWrite(_enb, 0);
    digitalWrite(_in3, LOW);
    digitalWrite(_in4, LOW);
}
void Motor::avanzar(int velocidad)
{
    analogWrite(_ena, velocidad);
    digitalWrite(_in1, LOW);
    digitalWrite(_in2, HIGH);

    analogWrite(_enb, velocidad);
    digitalWrite(_in3, LOW);
    digitalWrite(_in4, HIGH);
}