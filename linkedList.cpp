/* 
 * File:   linkedList.cpp
 * Author: Brett Noltkamper
 *
 * 
 * 
 */

#include <iostream>
#include "linkedList.h"
#include "node.h"

using namespace std;

linkedList::linkedList() : size(0), head(NULL), next(NULL), tail(NULL) {
    
}


linkedList::linkedList(int _size) : size(_size), head(0), next(0), tail(0){
    node *currentNode;
    node *tempNode;
    currentNode = head;
    for(int i=0; i < size; i++){
        tempNode = new node(0);
        currentNode->SetNextNode(tempNode);
        currentNode = tempNode;
        delete tempNode;
    }
}


linkedList::linkedList(int _size, int value): size(_size), head(value), next(value), tail(value)){
    node *currentNode;
    node *tempNode;
    currentNode = head;
    for(int i=0; i < size; i++){
        tempNode = new node(value);
        currentNode->SetNextNode(tempNode);
        currentNode = tempNode;
        delete tempNode;
    }
}

linkedList::~linkedList(){

}


void linkedList::insert(int value, int index){
    node *currentNode = head;
    for(int i=0; i < (index+1);i++){
        next = currentNode.GetNextNode();
        currentNode = next;
    }
    currentNode.SetValue(value);
}


int linkedList::find(int value){
    
}