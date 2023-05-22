#include "Servos.h"
#include "Sensors.h"
#include <vector>
#include <exception>

// Define os pinos dos servos, do potenciômetro e do botão
const int elasticPin = D3;
const int triggerPin = D7;
const int potPin = A0;
const int buttonPin = D8;

ServoMotor elastic(elasticPin);
ServoMotor trigger(triggerPin);

std::vector<ServoMotor> servos;

Potentiometer pot(potPin);

int buttonState = 0;
int lastButtonState = 0;


void setup() {
  pinMode(potPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);

  servos.push_back(trigger);
  servos.push_back(elastic);


}

void loop() {
  int angle = pot++ * 180; // operator overrided to normalize the potentiometer reading 
  servos[1].setPosition(angle);

  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    if (buttonState == LOW) {
      int triggerAngle = servos[0].getPosition();

      if (triggerAngle == 115) {
        servos[0].setPosition(150);
      } else {
        servos[0].setPosition(115);
      }
    }

    delay(50);
  }

  lastButtonState = buttonState;
}
