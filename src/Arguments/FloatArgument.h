#pragma once
#include "Argument.h"

class FloatArgument : public Argument {
private:
    float value;
    int type_id = FLOAT;
public:
    FloatArgument();
    void set_value(float value);
    float get_value();
    FloatArgument* copy();
};