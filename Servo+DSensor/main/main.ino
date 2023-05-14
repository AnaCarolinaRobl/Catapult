#include "Myservo.h"
#include "Ultrasonic.h"

#define servoPin_elastic D3
#define servoPin_block D7
Ultrasonic ultrasonic(D6);

Myservo elastic(servoPin_elastic);
Myservo block(servoPin_block);

long RangeInCentimeters;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly
  elastic.set_angle(0); //mettre dans 150 pour bloquer le ballon et 115 pour debloquer
  block.set_angle(0);
  //RangeInCentimeters = ultrasonic.MeasureInCentimeters(); // two measurements should keep an interval
 
 // if(RangeInCentimeters < 30){
    //Serial.print(RangeInCentimeters);//0~400cm
    //Serial.println(" cm");
 //}
 //delay(100);

}
