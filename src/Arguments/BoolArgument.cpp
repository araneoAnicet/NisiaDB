#include "BoolArgument.h"

void BoolArgument::set_value(bool value) {
    this->value = value;
}

bool BoolArgument::get_value() {
    return this->value;
}

BoolArgument* BoolArgument::copy() {
    BoolArgument* temp = new BoolArgument();
    temp->name = this->name;
    temp->value = this->value;
    temp->type_id = BOOL;
}
