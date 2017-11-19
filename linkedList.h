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
using namespace std;

class linkedList {
public:
    linkedList();
    linkedList(int _size);
    linkedList(int _size, double value);
    ~linkedList();
   
    void insert(double value, int index);
    int find(double value);
    double operator[](int index);
    
    int getSize() const;
    void init();
    
private:
    int size;
    node *head;
    node *next;
    node *temp;
    node *tail;
};



#endif /* LINKEDLIST_H */

