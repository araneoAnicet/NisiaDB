#pragma once
#include "EntityContainer.h"
#include "Selector.h"
#include "Entity.h"

class Entity;
class Table;
class Finder{
friend class Table;
private:
    std::vector<Entity*>* entities;  // error here  
public:
    EntityContainer by_id(unsigned int id);
    Selector by_arguments(Arguments* arguments);
};
