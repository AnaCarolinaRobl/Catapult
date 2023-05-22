#include "Servos.h"


ServoMotor::ServoMotor(int _pin){
    servo.attach(_pin);
}

ServoMotor::~ServoMotor() {
    servo.detach();
  }

void ServoMotor::setPosition(int angle){
    servo.write(angle);
  }

int ServoMotor::getPosition(){
    return servo.read();
  }
