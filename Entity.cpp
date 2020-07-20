#include "Entity.h"

void Entity::set_table(Table* table) {
    this->table = table;
}

Table* Entity::get_table() {
    return this->table;
}
