#include "Identity.h"

Identity::Identity() {
    this->id = Identity::top_id;
    Identity::top_id++;
}

long int Identity::get() {
    return this->id;
}
