#include "LinkedList.h"

template<class T>
void LinkedList<T>::add_ptr(T* ptr){
    Node* temp = new Node();
    temp->ptr = this->ptr;

    if (head != nullptr){
        temp->next = this->head->next;
        this->head->next = temp;
    }
    else{
        this->head = temp;
        this->next = nullptr;
    }
}

template<class T>
LinkedList<T>::Node* get_head(){
    return this->head;
}

template<class T>
LinkedList<T>::Node* get_tail(){
    return this->tail;
}
