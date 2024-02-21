#include <iostream>
#include "IntNode.h"
#include "IntList.h"
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


    return 0;
}
