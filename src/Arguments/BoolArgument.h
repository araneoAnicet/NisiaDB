#pragma once
#include "Argument.h"

class BoolArgument : public Argument {
private:
    bool value;
    int type_id = BOOL;
public:
    void set_value(bool value);
    bool get_value();
    BoolArgument* copy();
};
