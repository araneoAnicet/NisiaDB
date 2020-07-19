#include "Table.h"


Table::Table(std::string name) {
    this->name = name;
    this->find.entities = &(this->entities);
}

std::string Table::get_name() {
    return this->name;
}

void Table::add(Entity* entity) {
    this->entities.push_back(entity);
}
