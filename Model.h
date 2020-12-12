#pragma once
#include <vector>
#include "ArgumentImpl.h"

namespace nisia {
    class Model {
        private:
        class Meta {
                public:
                std::vector<NumberArgument*> number_arguments;
                std::vector<FloatArgument*> float_arguments;
                std::vector<StringArgument*> string_arguments;
                std::vector<BoolArgument*> bool_arguments;
                std::vector<ModelArgument*> model_arguments;
        };
        public:
            Meta meta;
    };
};
