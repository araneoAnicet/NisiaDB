#pragma once
#include <string>

namespace nisia {
    class Model;

    template<class T>
    class Argument {
        private:
            T value;
            std::string name;
        public:
            Argument(std::string name);
            std::string get_name();
            T get();
            void set(T value);
    };

    typedef Argument<int> NumberArgument;
    typedef Argument<float> FloatArgument;
    typedef Argument<std::string> StringArgument;
    typedef Argument<bool> BoolArgument;
    typedef Argument<Model*> ModelArgument;
};
