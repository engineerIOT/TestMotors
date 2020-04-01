#include "Arduino.h"
#include "Pin.h"

Pin::Pin()
{
}

Pin::Pin(int pin)
{
    _pin = pin;
}

void Pin::mode(int mode)
{
    _mode = mode;
}

void Pin::on()
{
    digitalWrite(_pin, HIGH);
}

void Pin::off()
{
    digitalWrite(_pin, LOW);
}

void Pin::blink(int duration)
{
    Pin::on();
    delay(duration / 2);
    Pin::off();
    delay(duration / 2);
}

Pin::~Pin()
{
    // TODO Auto-generated destructor stub
}
