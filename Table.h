#pragma once
#include <string>
#include <vector>
#include <Entity.h>
#include "Arguments/Argument.h"
#include "Identity.h"

class Table {
private:
    std::string name;
    std::vector<Entity*> entities;
public:
    Identity id;
    Table(std::string name);
    Arguments arguments;
    void add(Entity* entity);
    std::string get_name();
};
