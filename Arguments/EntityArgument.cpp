#include "EntityArgument.h"

void EntityArgument::set_value(Entity* value) {
    this->value = value;
}

Entity* EntityArgument::get_value() {
    return this->value;
}
