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
#include "node.h"
#include "node.cpp"
#include "linkedList.h"
#include "linkedList.cpp"
#include <ctime>
#include <stdlib.h>

using namespace std;



int main (int argc, char **argv)
{ 
	/*******************Creation using myArray*************************/
	//1K size
	time_t begin,end;
	time(&begin);
	
	linkedList<int> linkedList1(1000000, 0);
	linkedList1.init();
	
	time(&end);
	
	double sec_elapsed = difftime(end, begin);
	cout.precision(10);
	cout << "Time elapsed: " << sec_elapsed << endl;
	
	/*******************Insertion using myArray************************/
	int tenPercent = linkedList1.getSize()*0.1; 
	int random(0); 
	int size = linkedList1.getSize();
	/*cout << "Inserting " << tenPercent << " items." << endl;
	
	srand(time(0)); 
	time(&begin);


	for(int i = 0; i < tenPercent; i++)
	{
		random = rand() % size;
		//cout << random << endl;
		linkedList1.insert(random, 0);
	}
	
	time(&end);
	
	sec_elapsed = difftime(end, begin);
	cout.precision(10);
	cout << "Time elapsed: " << sec_elapsed << endl;*/
	
	/*******************Reads using myArray************************/
	/*cout << "Reading " << tenPercent << " items." << endl;
	time(&begin);
	
	int num(0);
	for(int i = 0; i < tenPercent; i++)
	{
		random = rand() % size;
		//cout << random << endl;
		num = linkedList1[random];
	}
	
	time(&end);
	sec_elapsed = difftime(end, begin);
	cout.precision(10);
	cout << "Time elapsed: " << sec_elapsed << endl;*/
	
	/*******************Searching using myArray************************/
	cout << "Searching " << tenPercent << " items." << endl;
	time(&begin);
	
	int index(0);
	for(int i = 0; i < tenPercent; i++)
	{
		random = rand() % size;
		//cout << random << endl;
		index = linkedList1.find(random);
	}
	
	time(&end);
	sec_elapsed = difftime(end, begin);
	cout.precision(10);
	cout << "Time elapsed: " << sec_elapsed << endl;
    return 0;
}
