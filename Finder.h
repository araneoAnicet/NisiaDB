#pragma once
#include "EntityContainer.h"

class Finder{
private:

public:
    entityContainer by_id(unsigned int id);
    selector by_arguments(Arguments* arguments);
private:
    void SetArguments(Arguments* arguments);
};
