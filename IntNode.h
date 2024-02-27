//
// Created by hloi on 2/20/2024.
//

#ifndef CH08LINKEDLIST_INTNODE_H
#define CH08LINKEDLIST_INTNODE_H


class IntNode {
public:
    IntNode(int dataInit = 0, IntNode* nextLoc = nullptr);
    IntNode(const IntNode& other);  // intnode copy constructor
    void InsertAfter(IntNode* nodeLoc);
    void setNextNodePtr(IntNode *nextNodePtr);
    IntNode* GetNext();
    void PrintNodeData();
    bool operator<(const IntNode& other) const;
    bool operator==(const IntNode& other) const;

private:
    int dataVal;
    IntNode* nextNodePtr;

};


#endif //CH08LINKEDLIST_INTNODE_H
