/* 
 * File:   linkedList.h
 * Author: Brett Noltkamper
 * Date Completed:
 * Function:
 * Input:
 * Output:
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <cstdlib>
#include <iostream>
#include "node.h"
#include "node.cpp"


using namespace std;

template <class T>
class linkedList {
public:
    linkedList();
    linkedList(int _size);
    linkedList(int _size, T value);
    ~linkedList();
   
    void insert(T value, int index);
    int find(T value);
    T operator[](int index);
    
    int getSize() const;
    void init();
    
private:
    int size;
    node<T> *head;
    node<T> *next;
    node<T> *tail;
    node<T> *currentNode;
    node<T> *tempNode;
};



#endif /* LINKEDLIST_H */

