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
#include "node.cpp"

using namespace std;

template <class T>
linkedList<T>::linkedList() : size(0), head(0), next(NULL), tail(head) {
}

template <class T>
linkedList<T>::linkedList(int _size) : size(_size), head(0), next(head.GetNextNode()), tail(0){
    node<T> *currentNode;
    node<T> *tempNode;
    currentNode = head;
    for(int i=0; i < getSize(); i++){
        tempNode = new node<T>(0);
        currentNode->SetNextNode(tempNode);
        currentNode = tempNode;
        delete tempNode;
    }
}

template <class T>
linkedList<T>::linkedList(int _size, T value): size(_size), head(value), next(value), tail(value){
    node<T> *currentNode;
    node<T> *tempNode;
    currentNode = head;
    for(int i=0; i < getSize(); i++){
        tempNode = new node<T>(value);
        currentNode->SetNextNode(tempNode);
        currentNode = tempNode;
        delete tempNode;
    }
}

template <class T>
linkedList<T>::~linkedList(){

}

template <class T>
void linkedList<T>::init(){
    node<T> *currentNode = head;
    for(int i=0; i < getSize(); i++){
        
    }
}

template <class T>
void linkedList<T>::insert(T value, int index){
    node<T> *currentNode;
    currentNode = head;
    for(int i=0; i < (index+1); i++){
        next = currentNode.GetNextNode();
        currentNode = next;
    }
    currentNode.SetValue(value);
}

template <class T>
int linkedList<T>::find(T value){
    int index = 0;
    node<T> *currentNode;
    currentNode = head;
    for(int i=0; i < getSize(); i++){
        if(currentNode->GetValue() == value){
            index = i;
        }else{
            cout << "Could not find that value in the dataset." << endl;
        }
        currentNode->SetNextNode(next);
        currentNode = next;
    }
    return index;
}

template <class T>
T linkedList<T>::operator[](int index){
    T value;
    node<T> *currentNode;
    currentNode = head;
    for(int i=0; i < (index+1); i++){
        next = currentNode.GetNextNode();
        currentNode = next;
    }
     value = currentNode.GetValue();
     return value;
}

template <class T>
int linkedList<T>::getSize() const{
    return size;
}