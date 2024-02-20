//
// Created by hloi on 2/20/2024.
//

#ifndef CH08LINKEDLIST_INTLIST_H
#define CH08LINKEDLIST_INTLIST_H
#include "IntNode.h"

class IntList {
public:
    IntList();
    void pushFront(IntNode* newNode);
    void pushBack(IntNode* newNode);
    void inser(int pos, IntNode* newNode);

    void print();
private:
    // head = -1 -> 0 -> 1 -> 2 -> 3 -> 4 = tail
    IntNode* head;
    IntNode* tail;
};


#endif //CH08LINKEDLIST_INTLIST_H
