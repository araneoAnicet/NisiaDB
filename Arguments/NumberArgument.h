#pragma once
#include "Argument.h"

class NumberArgument : public Argument {
private:
    int value;
public:
    NumberArgument();
    void set_value(int value);
    int get_value();
};
