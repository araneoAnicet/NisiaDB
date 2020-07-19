#pragma once
#include <string>
#include <vector>
#include <Entity.h>
#include "Arguments/Argument.h"
#include "Identity.h"
#include "Finder.h"

class Table {
private:
    std::string name;
    std::vector<Entity*> entities;
public:
    Finder find;
    Identity id;
    Arguments arguments;
    Table(std::string name);
    Table(Finder* find);

    void add(Entity* entity);
    std::string get_name();
};
