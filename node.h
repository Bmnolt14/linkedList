/* 
 * File:   node.h
 * Author: Brett Noltkamper
 *
 * 
 */

#ifndef NODE_H
#define NODE_H
#include <cstdlib>
#include <iostream>

using namespace std;

class node {
public:
    node();
    node(int);
    node(int, node *);
    node(const node& orig);
    ~node();

    void printAll();
    node* GetNextNode() const {
        return nextNode;
    }

    void SetNextNode(node* _nextNode) {
        nextNode = _nextNode;
    }

    int GetValue() const {
        return value;
    }

    void SetValue(int _value) {
        value = _value;
    }

    
    
private:
    int value;
    node *nextNode;

};

#endif /* NODE_H */

