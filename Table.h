#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Arguments/Arguments.h"
#include "Identity.h"
#include "Finder.h"
#include "Database.h"
#include "CanShow.h"
#include "Entity.h"

class DataBase;
class Table : public CanShow {
    friend class Database;
private:
    Database* database;
    std::string name;
    std::vector<Entity*> entities;
    void set_database(Database* database);
public:
    Finder* find;
    Identity id;
    Arguments* arguments;
    Table(std::string name);
    void add(Entity* entity);
    std::vector<Entity*> get_entities();
    std::string get_name();
    Database* get_database();
    void show() override;
};
