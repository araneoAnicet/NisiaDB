#pragma once
#include "EntityContainer.h"
#include "Selector.h"
#include "Entity.h"


class Finder{
private:
friend class Table;
    std::vector<Entity*> *entities;  
    void set_arguments(Arguments* arguments);
public:
    EntityContainer by_id(unsigned int id);
    Selector by_arguments(Arguments* arguments);
};
