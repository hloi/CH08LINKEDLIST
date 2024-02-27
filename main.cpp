#include <iostream>
#include "IntNode.h"
#include "IntList.h"
using namespace std;

int main() {
//    IntList list1;
    IntNode* node1 = new IntNode(5);
//    list1.pushFront(node1);
    IntNode* node2 = new IntNode(10);
//    list1.pushFront(node2);
    IntNode* node3 = new IntNode(20);
//    list1.pushBack(node3);
    IntNode* node4 = new IntNode(30);
//    list1.pushBack(node4);
//    list1.printList();

//    IntList list2 = list1; // call copy constructor
//    IntNode* node5 = new IntNode(50);
//    list2.pushBack(node5);
//
//    cout << "list2" << endl;

//    list1.printList();
//
//    list2.printList();
//    IntList list3;
//    list3 = list1;  // call operator=
//    cout << "list3 print" << endl;
//    list3.printList();

    IntList list4;

    list4.insertSort(node1);
    list4.insertSort(node3);
    list4.insertSort(node2);
    list4.insertSort(node4);
    cout << "=================list4================" << endl;
    list4.printList();
    return 0;
}
