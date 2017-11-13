/* 
 * File:   main.cpp
 * Author: Brett Noltkamper
 *
 * 
 */

#include <cstdlib>
#include "node.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    node head(10);
    node next(20);

    cout << &head << " " << &next << endl;
    head.printAll();
    next.printAll();

    cout << "After linking: " << endl;
    head.SetNextNode(&next);
    head.printAll();
    next.printAll();
    head.GetNextNode()->printAll();

    node *tempNode, *currentNode;
    tempNode = new node(11);
    cout << "tempNode: " << endl;
    tempNode->printAll();
    head.SetNextNode(tempNode);
    head.GetNextNode()->printAll();
    
    currentNode = tempNode;
    tempNode = new node(12);
    currentNode->SetNextNode(tempNode);
    
//    delete tempNode;

    return 0;
}

