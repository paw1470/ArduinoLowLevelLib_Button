#ifndef BUTTONPB_H
#define BUTTONPB_H
#include <inttypes.h>

class ButtonPB{
    private:
        uint8_t buttonPin;
    public:
        void init(uint8_t pin, bool internalPullUpResistor);
        bool isButtonPressed();
};

#endif