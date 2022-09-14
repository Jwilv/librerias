#ifndef Motor_h
#define Motor_h

class Motor{
private:
int pinR,pinL,resolution,canalR,canalL,frequency;
public:
Motor(int pinR,int pinL,int canalR,int canalL,int resolution);

void GoAdvance (int speed);

void GoBack(int speed);

void Still(int speed);

};

#endif
