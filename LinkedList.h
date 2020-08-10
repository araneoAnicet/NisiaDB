#pragma once

template<class T>

class LinkedList{
private:
    struct Node{
        T* ptr;
        Node *Next;
    };
    Node *head = nullptr;
    Node *tail = nullptr;
public:    
    void add_ptr(T* ptr);
    void get_head();
    void get_tail();
};

