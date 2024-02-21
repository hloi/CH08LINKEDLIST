//
// Created by hloi on 2/20/2024.
//

#include "IntList.h"

void IntList::pushFront(IntNode *newNode) {
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    else {
        newNode->setNextNodePtr(head);
        head = newNode;

    }


}

IntList::IntList() {
    head = nullptr;
    tail = nullptr;
}

void IntList::print() {
    IntNode* tmp = head;
    while (tmp != nullptr) {
        tmp->PrintNodeData();
        tmp = tmp->GetNext();
    }
}

void IntList::pushBack(IntNode *newNode) {
    if (head == nullptr) {
        pushFront(newNode);
    }
    else {
        tail->setNextNodePtr(newNode);
        tail = newNode;
    }
}
