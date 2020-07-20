#pragma once

class Identity {
private:
    static long int top_id;
    unsigned int id;
public:
    Identity();
    unsigned int get();
};
