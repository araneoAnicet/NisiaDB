#include "Argument.h"

void Argument::set_name(std::string name) {
    this->name = name;
}

void Argument::set_type_id(int type_id) {
    this->type_id = type_id;
}

std::string Argument::get_name() {
    return this->name;
}

int Argument::get_type_id() {
    return this->type_id;
}
