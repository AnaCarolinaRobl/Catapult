#ifndef SERVOS_H
#define SERVOS_H

#include "MyServo.h"

class ServoMotor
{
protected:
    Servo servo;

public:
    ServoMotor(int pin);
    ~ServoMotor();
    virtual void setPosition(int angle);
    int getPosition();
};


class TriggerServo : public ServoMotor {
public:
  using ServoMotor::ServoMotor;

  void setPosition(int angle) override {
    if (angle == 115 || angle == 150) {
      ServoMotor::setPosition(angle);
    } else {
      Serial.println("Invalid angle for TriggerServo");
    }
  }
};

#endif