#include "EntityArgument.h"

void EntityArgument::set_value(Entity* value) {
    this->value = value;
}

Entity* EntityArgument::get_value() {
    return this->value;
}

EntityArgument* EntityArgument::copy() {
    EntityArgument* temp = new EntityArgument();
    temp->name = this->name;
    temp->value = this->value;
    temp->type_id = this->type_id;
    return temp;
}
