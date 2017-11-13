/* 
 * File:   linkedList.h
 * Author: Brett Noltkamper
 *
 * 
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <cstdlib>
#include <iostream>
#include "node.h"


using namespace std;

class linkedList {
public:
    linkedList();
    linkedList(int _size);
    linkedList(int _size, int value);
    ~linkedList();
   
    void insert(int value, int index);
    int find(int value);
    
private:
    int size;
    node* head;
    node* next;
    node* tail;
    
};



#endif /* LINKEDLIST_H */

