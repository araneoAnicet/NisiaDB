#include "Argument.h"

template<class T>
Argument<T>::Argument(std::string name) {
    this->name = name;
}

template<class T>
std::string Argument<T>::get_name() {
    return this->name;
}

template<class T>
void Argument<T>::set_value(T value) {
    this->value = value;
}

template<class T>
T Argument<T>::get_value() {
    return this->value;
}
