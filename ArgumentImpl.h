#include "Argument.h"

template<typename T>
nisia::Argument<T>::Argument(std::string name) {
    this->name = name;
}

template<typename T>
std::string nisia::Argument<T>::get_name() {
    return this->name;
}

template<typename T>
T nisia::Argument<T>::get() {
    return this->value;
}

template<typename T>
void nisia::Argument<T>::set(T value) {
    this->value = value;
}