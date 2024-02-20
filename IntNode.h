//
// Created by hloi on 2/20/2024.
//

#ifndef CH08LINKEDLIST_INTNODE_H
#define CH08LINKEDLIST_INTNODE_H


class IntNode {
public:
    IntNode(int dataInit = 0, IntNode* nextLoc = nullptr);
    void InsertAfter(IntNode* nodeLoc);
    IntNode* GetNext();
    void PrintNodeData();
private:
    int dataVal;
    IntNode* nextNodePtr;
};


#endif //CH08LINKEDLIST_INTNODE_H
