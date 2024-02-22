//
// Created by hloi on 2/20/2024.
//

#ifndef CH08LINKEDLIST_INTLIST_H
#define CH08LINKEDLIST_INTLIST_H
#include "IntNode.h"

class IntList {
public:
    IntList();
    ~IntList(); // destructor
      IntList(const IntList& other);  // copy constructor
    IntList& operator=(const IntList& other); // assignment

    void pushFront(IntNode* newNode);
    void pushBack(IntNode* newNode);
    void inser(int pos, IntNode* newNode);
    void inserSort(IntNode* newNode);
    void print();
private:
    // head = -1 -> 0 -> 1 -> 2 -> 3 -> 4 = tail
    IntNode* head;
    IntNode* tail;
    void deleteList();
};


#endif //CH08LINKEDLIST_INTLIST_H
