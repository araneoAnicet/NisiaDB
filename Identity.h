#pragma once

class Identity {
friend class Finder;
private:
    static long int top_id;
    unsigned int id;
public:
    Identity();
    unsigned int get();
};
