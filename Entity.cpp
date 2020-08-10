#include "Entity.h"

Table* Entity::get_table() {
    return this->table;
}

void Entity::init(Initializer* initializer) {
    this->table = initializer->getTable();
    this->arguments = initializer->getArguments();
}