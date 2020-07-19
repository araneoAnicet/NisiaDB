#pragma once
#include <vector>
#include "Entity.h"
#include "EntityContainer.h"
#include "Finder.h"

class Selector {
    friend class Finder;
private:
    bool has_entities;
    std::vector<Entity*> entities;
public:
    EntityContainer first();
    std::vector<Entity*> all();
};
