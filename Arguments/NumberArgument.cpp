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

NumberArgument* NumberArgument::copy() {
    NumberArgument* temp = new NumberArgument();
    temp->name = this->name;
    temp->value = this->value;
    temp->type_id = this->type_id;
    return temp;
}
