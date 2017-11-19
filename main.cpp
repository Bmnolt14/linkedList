/*
 * File: main.cpp
 * Author: Brett Noltkamper
 * Date Completed:
 * Function: Tests functions of linked list
 * Input: 
 * Output:
 */

#include <cstdio>
#include <iostream>
#include "linkedList.h"
#include <ctime>
#include <stdlib.h>

using namespace std;



int main (int argc, char **argv)
{ 
	/*******************Creation using linkedList*************************/
	//1K size
	time_t begin,end;
	time(&begin);
	
	linkedList linkedList1(1000000, 0);
	linkedList1.init();
	
	time(&end);
	
	double sec_elapsed = difftime(end, begin);
	cout.precision(10);
	cout << "Time elapsed: " << sec_elapsed << endl;
	
	/*******************Insertion using linkedList************************/
	int tenPercent = linkedList1.getSize()*0.1; 
	int random(0); 
	int size = linkedList1.getSize();
	cout << "Inserting " << tenPercent << " items." << endl;
	
	srand(time(0)); 
	time(&begin);


	for(int i = 0; i < tenPercent; i++)
	{
		random = rand() % size;
		linkedList1.insert(random, 0);
                cout << "Inserted " << random << endl; 
	}
	
	time(&end);
	
	sec_elapsed = difftime(end, begin);
	cout.precision(10);
	cout << "Time elapsed: " << sec_elapsed << endl;
	
	/*******************Reads using linkedList************************/
	cout << "Reading " << tenPercent << " items." << endl;
	time(&begin);
	
	int num(0);
	for(int i = 0; i < tenPercent; i++)
	{
		random = rand() % size;
		num = linkedList1[random];
                cout << "The number at index " << random << " is " << num << endl;
	}
	
	time(&end);
	sec_elapsed = difftime(end, begin);
	cout.precision(10);
	cout << "Time elapsed: " << sec_elapsed << endl;
	
	/*******************Searching using myArray************************/
	cout << "Searching " << tenPercent << " items." << endl;
	time(&begin);
	
	int index(0);
	for(int i = 0; i < tenPercent; i++)
	{
		random = rand() % size;
		index = linkedList1.find(random);
                cout << random << " is at index " << index << endl;
	}
	
	time(&end);
	sec_elapsed = difftime(end, begin);
	cout.precision(10);
	cout << "Time elapsed: " << sec_elapsed << endl;
    return 0;
}
