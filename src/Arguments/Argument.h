#pragma once
#include <string>


// argument types
#define NUMBER 0
#define FLOAT 1
#define STRING 2
#define ENTITY 3
#define BOOL 4

class Argument {
protected:
    std::string name;
    int type_id;
    void set_type_id(int type_id);
public:
    void set_name(std::string name);
    std::string get_name();
    int get_type_id();
};
