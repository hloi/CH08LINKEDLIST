#include <iostream>
#include "IntNode.h"
#include "IntList.h"
using namespace std;

int main() {
    IntList list1;
    IntNode* node1 = new IntNode(5);
    list1.pushFront(node1);
    IntNode* node2 = new IntNode(10);
    list1.pushFront(node2);
    IntNode* node3 = new IntNode(20);
    list1.pushBack(node3);
    IntNode* node4 = new IntNode(30);
    list1.pushBack(node4);
    list1.print();

    IntList list2 = list1; // call copy constructor
    IntNode* node5 = new IntNode(50);
    list2.pushBack(node5);

    cout << "list2" << endl;

    list1.print();

    list2.print();
    IntList list3;
    list3 = list1;  // call operator=
    cout << "list3 print" << endl;
    list3.print();
    return 0;
}
