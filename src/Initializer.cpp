#include "Initializer.h"

void Initializer::setTable(Table* table) {
    this->table = table;
}

void Initializer::setSelector(Selector* selector) {
    this->selector = selector;
}

void Initializer::setFinder(Finder* finder) {
    this->finder = finder;
}

void Initializer::setEntity(Entity* entity) {
    this->entity = entity;
}

void Initializer::setDatabase(Database* database) {
    this->database = database;
}

void Initializer::setArguments(Arguments* arguments) {
    this->arguments = arguments;
}

Table* Initializer::getTable() {
    return this->table;
}

Selector* Initializer::getSelector() {
    return this->selector;
}

Finder* Initializer::getFinder() {
    return this->finder;
}

Entity* Initializer::getEntity() {
    return this->entity;
}

Database* Initializer::getDatabase() {
    return this->database;
}

Arguments* Initializer::getArguments() {
    return this->arguments;
}
