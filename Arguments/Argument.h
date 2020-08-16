#pragma once
#include <string>
#include "../Entity.h"


class Entity;
template<typename T>
class Argument {
protected:
    T value;
    std::string name;
public:
    Argument(std::string name);
    std::string get_name();
    void set_value(T value);
    T get_value();
};

typedef class Argument<bool> BoolArgument;
typedef class Argument<float> FloatArgument;
typedef class Argument<int> NumberArgument;
typedef class Argument<std::string> StringArgument;
typedef class Argument<Entity*> EntityArgument;
