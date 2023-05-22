#ifndef SENSORS_H
#define SENSORS_H

#include <Arduino.h>

class Potentiometer
{
  private:
  int pin;

  public: 

  Potentiometer(int _pin){

    try {
      // verify if the potentiometer pin is analogic
      if(_pin != A0){
        Serial.begin(9600);
        Serial.print("Valor inválido!");
        Serial.println("Exceção capturada:");
        throw "Invalid value for the pin";      
      }
      
    } catch (const char *e) {
      while(true){
        Serial.print("Exception invalid pin for the potentiometer: ");
        Serial.println(e);
        delay(200);        
      }

    }
    
    pin = _pin;
  };

  int getValue(){
    return analogRead(pin);
  };

  float operator++(int){
    // return the value normalized
    float x = getValue();
    x = x/1023;
    return x;
  };

};


#endif
