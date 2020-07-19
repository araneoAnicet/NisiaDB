#pragma once
#include "EntityContainer.h"

class Finder{
private:
    void SetArguments(Arguments* arguments);
public:
    EntityContainer by_id(unsigned int id);
    Selector by_arguments(Arguments* arguments);
};
