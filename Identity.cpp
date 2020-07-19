#include "Identity.h"

Identity::Identity() {
    this->id = Identity::top_id;
    Identity::top_id++;
}

unsigned int Identity::get() {
    return this->id;
}
