#include "Identity.h"

unsigned int nisia::Identity::top_id = 0;

nisia::Identity::Identity() {
    this->id = nisia::Identity::top_id++;
}

unsigned int nisia::Identity::get() {
    return this->id;
}
