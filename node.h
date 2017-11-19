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

class node{
public:
    node();
    node(double _value);
    node(double _value, node *_nextNode);
    node(const node& orig);
    ~node();

    void printAll();
    
    node* GetNextNode()const;
    void SetNextNode(node* );
    
    double GetValue() const;
    void SetValue(double );
    
private:
    double value;
    node *nextNode;

};

#endif /* NODE_H */

