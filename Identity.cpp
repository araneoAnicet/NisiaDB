#include "Identity.h"

long int Identity::top_id = 0;

Identity::Identity() {
    this->id = Identity::top_id;
    Identity::top_id++;
}

unsigned int Identity::get() {
    return this->id;
}
