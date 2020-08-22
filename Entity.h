#pragma once
#include "Arguments/Arguments.h"
#include "Identity.h"
#include "Table.h"
#include "Initializable.h"
#include "Initializer.h"
#include "Collectable.h"

class Selector;
class EntityContainer;
class EntitiesContainer;
class EntityArgument;
class Arguments;
class Table;
class Initializer;
class Initializable;
class Entity: public Initializable, public Collectable {
private:
    Table* table;  // go to Table.h and remove the usage of set_table method
public:
    Entity();
    Identity id;
    Arguments* arguments;
    Table* get_table();
    void init(Initializer* initializer) override;
};
