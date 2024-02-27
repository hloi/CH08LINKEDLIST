//
// Created by hloi on 2/20/2024.
//
#include <iostream>
#include "IntList.h"

using namespace std;

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

void IntList::printList() {
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

IntList::IntList(const IntList& other) {
    cout << "copy constructor called." << endl;
    head = nullptr;
    tail = nullptr;
    IntNode* tmp = other.head;
    while (tmp != nullptr) {
        IntNode* newNode = new IntNode(*tmp);
        pushBack(newNode);
        tmp = tmp->GetNext();
    }

}
//
IntList &IntList::operator=(const IntList &other) {
    cout << "operator= called." << endl;
    if (this != &other) {  // no self assigned
        //delete this;  // delete current list
        deleteList();  // empty the list

        IntNode* tmp = other.head;
        while (tmp != nullptr) {
            IntNode* newNode = new IntNode(*tmp);
            pushBack(newNode);
            tmp = tmp->GetNext();
        }

    }

    return *this;
}

IntList::~IntList() {
    cout << "call destructor for linked list" << endl;
    deleteList();

}

void IntList::deleteList() {
    IntNode* tmp = head;
    while (tmp != nullptr) {
        IntNode* tmpNode = tmp;
        tmp = tmp->GetNext();
        cout << "delete ";
        tmpNode->PrintNodeData();
        delete tmpNode;
    }
    head = nullptr;
    tail = nullptr;
}

void IntList::insertSort(IntNode *newNode) {
    IntNode* tmp = head;
    if (head == nullptr || *newNode < *head) {
        pushFront(newNode);
    }
    else if (!(*newNode < *tail)) {
        pushBack(newNode);
    }
    else {
        while (tmp->GetNext() != nullptr) {
            if (*newNode < *tmp->GetNext()) {  // newNode.operator>(tmp)
                tmp->InsertAfter(newNode);
            }

            tmp = tmp->GetNext();
        }

    }
}

IntNode *IntList::getHead() const {
    return head;
}

