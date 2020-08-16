#include "NumberArgument.h"

NumberArgument::NumberArgument() {
    this->type_id = NUMBER;
}

void NumberArgument::set_value(int value) {
    this->value = value;
}

int NumberArgument::get_value() {
    return this->value;
}
