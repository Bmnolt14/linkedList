/* 
 * File:   node.cpp
 * Author: Brett Noltkamper
 * Date Completed:
 * Function:
 * Input:
 * Output:
 */

#include "node.h"
#include <iostream>
using namespace std;

node::node() : value(0), nextNode(NULL) {
   
}

node::node(double _value) : value(_value), nextNode(NULL){
    
}

node::node(double _value, node *_nextNode) : value(_value), nextNode(_nextNode){
    
    
}

node::node(const node& orig) : value(orig.GetValue()), nextNode(orig.GetNextNode()){
 
}

node::~node(){
}

node* node::GetNextNode() const {
        return nextNode;
    }

void node::SetNextNode(node* _nextNode) {
        nextNode = _nextNode;
    }

double node::GetValue() const {
        return value;
    }

void node::SetValue(double _value){
    value = _value;
}
void node::printAll(){
    cout << "Node content:" << endl;
    cout << value << endl;
    cout << nextNode << endl;
}