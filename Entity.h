#pragma once
#include <Arguments/Arguments.h>
#include "Identity.h"
#include "Table.h"

class Selector;
class EntityContainer;
class EntitiesContainer;
class EntityArgument;
class Entity {
    friend class Table;
private:
    Table* table;
    void set_table(Table* table);
public:
    Identity id;
    Arguments* arguments;
    Table* get_table();
};
