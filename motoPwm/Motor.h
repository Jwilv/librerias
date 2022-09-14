#ifndef Motor_h
#define Motor_h

class Motor{
private:
int pinR,pinL,resolution,canalR,canalL;
public:
Motor(pinR,pinL,canalR,canalL);

void GoAdvance (int speed);

void GoBack(int speed);

void Still(int speed);

};

#endif
