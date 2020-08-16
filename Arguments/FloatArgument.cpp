#include "FloatArgument.h"

FloatArgument::FloatArgument() {
    this->type_id = FLOAT;
}

void FloatArgument::set_value(float value) {
    this->value = value;
}

float FloatArgument::get_value() {
    return this->value;
}

FloatArgument* FloatArgument::copy() {
    FloatArgument* temp = new FloatArgument();
    temp->name = this->name;
    temp->value = this->value;
    temp->type_id = this->type_id;
    return temp;
}
