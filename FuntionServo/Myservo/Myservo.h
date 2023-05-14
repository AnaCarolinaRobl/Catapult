#ifndef SERVO_H
#define SERVO_H

#include <Arduino.h>

class Myservo
{

public:
    int servoPin;
    
    Myservo (int _servoPin);
    void set_angle (int angle);


};


#endif
