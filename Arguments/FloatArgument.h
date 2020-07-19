#pragma once
#include "Argument.h"

class FloatArgument : public Argument {
private:
    float value;
public:
    FloatArgument();
    void set_value(float value);
    float get_value();
};