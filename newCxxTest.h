/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

#include <iostream>
#include "IntNode.h"
#include "IntList.h"

using namespace std;

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyFunction() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
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

        vector<IntNode*> testlist;
        testlist.push_back(node1);
        testlist.push_back(node2);
        testlist.push_back(node3);
        testlist.push_back(node4);


        IntList list4;
        list4.insertSort(node1);
        list4.insertSort(node3);
        list4.insertSort(node2);
        list4.insertSort(node4);
        cout << "=================list4================" << endl;
        list4.printList();

        IntNode* tmp = list4.getHead();
        for (int i=0; i<testlist.size(); i++) {
            TS_ASSERT(*testlist[i] == *tmp)
            tmp = tmp->GetNext();
        }
    }

    void testLessOp() {
//    IntList list1;
        IntNode* node1 = new IntNode(5);
//    list1.pushFront(node1);
        IntNode* node2 = new IntNode(10);
//    list1.pushFront(node2);
        IntNode* node3 = new IntNode(20);
//    list1.pushBack(node3);
        IntNode* node4 = new IntNode(30);
        IntList list4;
        list4.insertSort(node1);
        list4.insertSort(node3);
        list4.insertSort(node2);
        list4.insertSort(node4);
        cout << "=================list4================" << endl;
        list4.printList();
        IntNode* tmp = list4.getHead();
        while (tmp->GetNext() != nullptr) {
            TS_ASSERT(*tmp < *tmp->GetNext());
            tmp = tmp->GetNext();
        }
    }

    void testOpAssignment() {
        IntList list1;
        IntNode* node1 = new IntNode(5);
        list1.pushFront(node1);
        IntNode* node2 = new IntNode(10);
        list1.pushFront(node2);
        IntNode* node3 = new IntNode(20);
        list1.pushBack(node3);

        IntList list2;
        list2 = list1;

        IntNode* tmp1 = list1.getHead();
        IntNode* tmp2 = list2.getHead();

        while (tmp1 != nullptr) {
            TS_ASSERT(tmp1 != tmp2);
            tmp1 = tmp1->GetNext();
            tmp2 = tmp2->GetNext();

        }



    }

    void testCopyConstructor() {
        IntList list1;
        IntNode* node1 = new IntNode(5);
        list1.pushFront(node1);
        IntNode* node2 = new IntNode(10);
        list1.pushFront(node2);
        IntNode* node3 = new IntNode(20);
        list1.pushBack(node3);

        IntList list2 = list1;


        IntNode* tmp1 = list1.getHead();
        IntNode* tmp2 = list2.getHead();

        while (tmp1 != nullptr) {
            TS_ASSERT(tmp1 != tmp2);
            tmp1 = tmp1->GetNext();
            tmp2 = tmp2->GetNext();

        }



    }


};
#endif /* NEWCXXTEST_H */
