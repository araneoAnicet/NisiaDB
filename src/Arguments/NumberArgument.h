#pragma once
#include "Argument.h"

class NumberArgument : public Argument {
private:
    int value;
    int type_id = NUMBER;
public:
    NumberArgument();
    void set_value(int value);
    int get_value();
    NumberArgument* copy();
};
