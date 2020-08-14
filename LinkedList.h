#pragma once
#include <iostream>

template<class T>
class LinkedListNode {
public:
    T value;
    LinkedListNode* next;
};

template<typename T>
class LinkedList {
private:
    LinkedListNode<T>* head = nullptr;
    LinkedListNode<T>* tail = nullptr;
public:
    void add(T value);
    LinkedListNode<T>* get_head();
    LinkedListNode<T>* get_tail();
};
