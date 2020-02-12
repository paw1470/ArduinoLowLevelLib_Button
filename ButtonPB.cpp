#include "ButtonPB.h"
#include "Arduino.h"

void ButtonPB::init(uint8_t pin, bool internalPullUpResistor){
    buttonPin = pin;
    if(internalPullUpResistor){
        pinMode(buttonPin, INPUT_PULLUP);
    } else{
        pinMode(buttonPin, INPUT);
    }
}

bool ButtonPB::isButtonPressed(){ 
    return !digitalRead(buttonPin);
}

