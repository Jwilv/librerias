#include "Motor.h"

Motor:: Motor(int pinR,int pinL,int canalR,int canalL,int resolution,int frequency)
  {
    this->pinR = pinR;
    this->pinL = pinL;
    this->canalR = canalR;
    this->canalL = canalL;
    this->resolution = resolution;

        ledcSetup(canalR, frequency, resolution);
        ledcSetup(canalL, frequency, resolution);

        ledcAttachPin(pinR, canalR);
        ledcAttachPin(pinL, canalL);

  }
  void Motor:: GoAdvance(int speed)
  {
    ledcWrite(canalR, LOW);
    ledcWrite(canalL, speed);
  }
   void Motor:: GoBack(int speed)
  {
   ledcWrite(canalR, speed);
    ledcWrite(canalL, LOW);
  }
   void Motor:: Still()
  {
    edcWrite(canalR, LOW);
    ledcWrite(canalL, LOW);
  }
