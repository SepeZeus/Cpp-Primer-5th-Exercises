// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"


using namespace std;

int main()
{

	int i;

	int *pi = &i;
	

	*pi = 3;


	cout << i << " " << *pi;

	i = 6;

	cout << i << " " << *pi;

	return 0;
}