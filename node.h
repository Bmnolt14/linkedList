/* 
 * File:   node.h
 * Author: Brett Noltkamper
 * Date Completed:
 * Function:
 * Input:
 * Output:
 */

#ifndef NODE_H
#define NODE_H
#include <cstdlib>
#include <iostream>

using namespace std;

template <class T>
class node {
public:
    node();
    node(T _value);
    node(T _value, node *_nextNode);
    node(const node& orig);
    ~node();

    
    void printAll();
    node* GetNextNode() const {
        return nextNode;
    }

   
    void SetNextNode(node* _nextNode) {
        nextNode = _nextNode;
    }

 
    T GetValue() const {
        return value;
    }


    void SetValue(T _value) {
        value = _value;
    }

    
    
private:
    T value;
    node *nextNode;

};

#endif /* NODE_H */

