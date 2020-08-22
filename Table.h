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
#include "Initializable.h"
#include "Collectable.h"

class DataBase;
class Finder;
class Arguments;
class Entity;
class Table : public CanShow, public Initializable, public Collectable {
private:
    Database* database;
    std::string name;
    std::vector<Entity*> entities;
    // go to Database.h and remove set_database functionality
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
    void init(Initializer* initializer) override;
};
