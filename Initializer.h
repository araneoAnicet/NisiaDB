#pragma once
#include "Table.h"
#include "Selector.h"
#include "Finder.h"
#include "Entity.h"
#include "Database.h"
#include "Arguments/Arguments.h"

class Initializer {
private:
    Table* table;
    Selector* selector;
    Finder* finder;
    Entity* entity;
    Database* database;
    Arguments* arguments;
public:
    void setTable(Table* table);
    void setSelector(Selector* selector);
    void setFinder(Finder* finder);
    void setEntity(Entity* entity);
    void setDatabase(Database* database);
    void setArguments(Arguments* arguments);
    Table* getTable();
    Selector* getSelector();
    Finder* getFinder();
    Entity* getEntity();
    Database* getDatabase();
    Arguments* getArguments();
};
