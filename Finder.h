#pragma once
#include "EntityContainer.h"
#include "Selector.h"

class Finder{
private:
    void set_arguments(Arguments* arguments);
public:
    EntityContainer by_id(unsigned int id);
    Selector by_arguments(Arguments* arguments);
};
