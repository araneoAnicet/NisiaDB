#pragma once

namespace nisia {
    class Identity {
        private:
            static unsigned int top_id;
            unsigned int id;
        public:
            Identity();
            unsigned int get();
    };
};