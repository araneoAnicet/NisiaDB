#pragma once
#include "Argument.h"

class BoolArgument : public Argument {
private:
    bool value;
public:
    void set_value(bool value);
    bool get_value();
};
