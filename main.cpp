#include <iostream>
#include "IntNode.h"
#include "IntList.h"
int main() {
    IntList list1;
    IntNode* node1 = new IntNode(5);
    list1.pushFront(node1);
    IntNode* node2 = new IntNode(10);
    list1.pushFront(node2);
    list1.print();


    return 0;
}
