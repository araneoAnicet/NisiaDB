#pragma once

class Container {
protected:
    bool instance_exists;
public:
    Container(bool instance_exists);
    bool has_instance();
};