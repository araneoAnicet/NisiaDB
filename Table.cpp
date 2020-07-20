#include "Table.h"


Table::Table(std::string name) {
    this->name = name;
    this->find.entities = &(this->entities);
}

std::string Table::get_name() {
    return this->name;
}

void Table::add(Entity* entity) {
    entity->set_table(this);
    this->entities.push_back(entity);
}

void Table::set_database(Database* database) {
    this->database = database;
}

std::vector<Entity*> Table::get_entities() {
    return this->entities;
}
