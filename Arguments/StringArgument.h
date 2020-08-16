#pragma once
#include "Argument.h"
#include <string>

class StringArgument : public Argument {
private:
    std::string value;
    int type_id = STRING;
public:
    void set_value(std::string value);
    std::string get_value();
    StringArgument* copy();
};

