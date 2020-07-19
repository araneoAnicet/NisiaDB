#pragma once
#include <string>
#include <vector>

class Arguments {
private:
    std::vector<FloatArgument*> float_arguments;
    std::vector<NumberArgument*> number_arguments;
    std::vector<StringArgument*> string_arguments;
    std::vector<EntityArgument*> entity_arguments;
    std::vector<BoolArgument*> bool_arguments;
public:
    Arguments(Arguments* arguments);
};
