#pragma once
#include <string>
#include <vector>

class Arguments 
{
private:
    std::string name;
    std::vector<Argument*> Arguments;
    std::vector<Entity*> Entitys;
    std::vector<FloatArgument*> FloatArgument;
    std::vector<NumberArgument*> NumberArgument;
    std::vector<StringArgument*> StringArgument;
}