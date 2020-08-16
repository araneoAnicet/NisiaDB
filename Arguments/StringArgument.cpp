#include "StringArgument.h"

void StringArgument::set_value(std::string value) {
    this->value = value;
}

std::string StringArgument::get_value() {
    return this->value;
}

StringArgument* StringArgument::copy() {
    StringArgument* temp = new StringArgument();
    temp->name = this->name;
    temp->value = this->value;
    temp->type_id = this->type_id;
    return temp;
}
