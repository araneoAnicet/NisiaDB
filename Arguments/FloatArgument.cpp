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
