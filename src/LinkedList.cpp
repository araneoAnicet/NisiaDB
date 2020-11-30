#include "LinkedList.h"

template<class T>
void LinkedList<T>::add(T value) {
    LinkedListNode<T>* temp = new LinkedListNode<T>();
    temp->value = value;
    temp->next = nullptr;
    if (this->head == nullptr) {
        this->head = this->tail = temp;
    } else {
        this->tail->next = temp;
        this->tail = temp;
    }
}

template<class T>
LinkedListNode<T>* LinkedList<T>::get_head() {
    return this->head;
}

template<class T>
LinkedListNode<T>* LinkedList<T>::get_tail() {
    return this->tail;
}
