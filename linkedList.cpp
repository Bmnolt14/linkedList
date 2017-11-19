/* 
 * File:   linkedList.cpp
 * Author: Brett Noltkamper
 * Date Completed:
 * Function: 
 * Input:
 * Output:
 */

#include <iostream>
#include "linkedList.h"
#include "node.h"

using namespace std;

//Default Constructor, list with just the head set to 0.
linkedList::linkedList() : size(1){
    head = new node(0);
}

//Alt Constructor, list of _size, full of 0's
linkedList::linkedList(int _size) : size(_size){
    head = new node(0);
    tail = head;
    for(int i=0; i < getSize(); i++){
        temp = new node(0);
        tail->SetNextNode(temp);
        tail = temp;
    }
}

//Alt Constructor 2, list of _size, full of value
linkedList::linkedList(int _size, double value): size(_size){
    head = new node(value);
    tail = head;
    for(int i=0; i < getSize(); i++){
        temp = new node(value);
        tail->SetNextNode(temp);
        tail = temp;
    }
}

//Destructor
linkedList::~linkedList(){
    for(int i=0; i < getSize(); i++){
        temp = head;
        head = head->GetNextNode();
        delete temp;
    }
}

//initializes all nodes value to 0
void linkedList::init(){
    node head(0);
    tail = &head;
    while(tail->GetNextNode() != NULL)
    for(int i=0; i < getSize(); i++){
        tail->SetValue(0);
        tail = tail->GetNextNode();
    }
}

//inserts value at index of list
void linkedList::insert(double value, int index){  
    node head;
    tail = &head;
    while(tail->GetNextNode() != NULL){
    for(int i=0; i < (index+1); i++){
        next = tail->GetNextNode();
        tail = next;
    }
    }
    tail->SetValue(value);
    cout << "Insertion complete." << endl;
}

//returns the index of value
int linkedList::find(double value){
    int index = 0;
    node head;
    tail = &head;
    while(tail->GetNextNode() != NULL){
    for(int i=0; i < getSize(); i++){
        if(tail->GetValue() == value){
            cout << "Found the value" << endl;
            index = i;
        }else{
            cout << "Could not find that value in the dataset." << endl;
            index = 0;
        }
        next = tail->GetNextNode();
        tail = next;
    }
    }
    return index;
}

//returns the value at index
double linkedList::operator[](int index){
    double value;
    node head;
    tail = &head;
    while(tail->GetNextNode() != NULL){
    for(int i=0; i < (index+1); i++){
        next = tail->GetNextNode();
        tail = next;
    }
    }
     value = tail->GetValue();
     cout << "Found index." << endl;
     return value;
}

int linkedList::getSize() const{
    return size;
}