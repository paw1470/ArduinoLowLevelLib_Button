#include "ButtonPB.h"
#include "Arduino.h"

#define BUTTON_PIN 2
#define LED_PIN 13

ButtonPB button;

void setup(){
    pinMode(LED_PIN, OUTPUT);
    button.init(BUTTON_PIN); //default argument = true, button with internal pull up resistor
    // button.init(BUTTON_PIN, true); //button with internal pull up resistor
    //button.init(BUTTON_PIN, false); //you need to add external pull up resistor. Default is 10k between VCC and PIN
}

void loop(){
    if(button.isButtonPressed()){
        digitalWrite(LED_PIN, HIGH);
    } else{
        digitalWrite(LED_PIN, LOW);
    }
}