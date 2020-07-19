#include "StringArgument.h"

void StringArgument::set_value(std::string value) {
    this->value = value;
}

std::string StringArgument::get_value() {
    return this->value;
}
