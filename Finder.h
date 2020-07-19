#pragma once
#include "EntityContainer.h"

class Finder{
private:
    void SetArguments(Arguments* arguments);
public:
    entity_container y_id(unsigned int id);
    selector by_arguments(Arguments* arguments);
};
