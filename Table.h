#pragma once
#include <string>
#include <vector>
#include <Entity.h>
#include "Arguments/Argument.h"

class Table {
private:
    std::vector<Entity*> entities;
public:
    Arguments arguments;
    void add(Entity* entity);
};
