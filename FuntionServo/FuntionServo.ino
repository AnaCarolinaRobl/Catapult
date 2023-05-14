#include "Myservo.h"
#define servoPin D3

int tempo = millis();
Myservo s(servoPin);

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly
  s.set_angle(180);
  
  //if(millis() - tempo < 1000 )
  //setMotor(90);
  //else
  //setMotor(0);

}
