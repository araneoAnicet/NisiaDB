#include "Container.h"

Container::Container(bool instance_exists) {
    this->instance_exists = instance_exists;
}

bool Container::has_instance() {
    return this->instance_exists;
}
