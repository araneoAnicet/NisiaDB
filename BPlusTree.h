#pragma once

namespace nisia {
    namespace b_plus_tree {
        template<class T>
        class BPlusTreeNode {
            friend class BPlusTree;
            private:
                bool is_leaf;
                int* key;
                int size;
                BPlusTreeNode<T>** ptr;
            public:
                BPlusTreeNode();
        };

        template<class T>
        class Container {
            friend class BPlusTree;
            private:
                bool element_exists;
                T element;
            public:
                T get();
                bool has_element();
                Container();
                Container(T element);
        };

        template<class T>
        class BPlusTree {
            public:
                void insert(T element);
                void remove(T element);
                bool find(T element);
        };
    };
    
};