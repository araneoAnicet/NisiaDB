#pragma once

class Identity {
private:
    static long int top_id;
    long int id;
public:
    Identity();
    long int get();
};
