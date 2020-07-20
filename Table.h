#pragma once
#include <string>
#include <vector>
#include <Entity.h>
#include "Arguments/Argument.h"
#include "Identity.h"
#include "Finder.h"
#include "Database.h"

class Table {
    friend class Database;
private:
    Database* database;
    std::string name;
    std::vector<Entity*> entities;
    void set_database(Database* database);
public:
    Finder find;
    Identity id;
    Arguments arguments;
    Table(std::string name);
    void add(Entity* entity);
    std::vector<Entity*> get_entities();
    std::string get_name();
    Database* get_database();
};
