/* 
 * File:   node.cpp
 * Author: Brett Noltkamper
 * Date Completed:
 * Function:
 * Input:
 * Output:
 */

#include "node.h"

template <class T>
node<T>::node() : value(0), nextNode(NULL){
    
}

template <class T>
node<T>::node(T _value): value(_value), nextNode(NULL) {
}

template <class T>
node<T>::node(T _value, node *_nextNode) : value(_value), nextNode(_nextNode) {
    
}

template <class T>
node<T>::node(const node& orig) : value(orig.GetValue()), nextNode(orig.GetNextNode()) {
 
}

template <class T>
node<T>::~node() {
}

template <class T>
void node<T>::printAll(){
    cout << "Node content:" << endl;
    cout << value << endl;
    cout << nextNode << endl;
}