#include "Myservo.h"


Myservo::Myservo(int _servoPin)
{
  servoPin=_servoPin;
  pinMode(servoPin, OUTPUT);
}
  
void Myservo::set_angle(int Angle)
{   
    float PWM;
    static unsigned long time_init_pulse = micros();

    // A pulse each 20ms
    PWM = 600 + ((850 / 90) * Angle); // Duration of the pulse in microseconds
                                      // Pulses duration: 600 - 0deg; 1450 - 90deg; 2300 - 180deg
    if (micros() < time_init_pulse + PWM)
    {
        digitalWrite(servoPin, HIGH);
    }
    else
    {
        digitalWrite(servoPin, LOW);
        if (micros() > time_init_pulse + 20000)
        {
            time_init_pulse = micros();
        }
    }
}
