#include "Table.h"


Table::Table(std::string name) {
    this->name = name;
}

std::string Table::get_name() {
    return this->name;
}

void Table::add(Entity* entity) {
    this->entities.push_back(entity);
}

std::vector<Entity*> Table::get_entities() {
    return this->entities;
}

void Table::show() {
    std::cout << "PARAMS OF TABLE " << this->name << "; ID: " << this->id.get() << std::endl;
    std::cout << "ARGUMENTS" << std::endl;
    for (Argument* argument : arguments->get_all()) {
        std::cout << "\t" << argument->get_name() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "ENTITIES IDS" << std::endl;
    for (Entity* entity : this->entities) {
        std::cout << "\t" << entity->id.get() << std::endl;
    }
}

void Table::init(Initializer* initializer) {
    this->find = initializer->getFinder();
    this->arguments = initializer->getArguments();
    this->database = initializer->getDatabase();
    find->entities = &(this->entities);
}
