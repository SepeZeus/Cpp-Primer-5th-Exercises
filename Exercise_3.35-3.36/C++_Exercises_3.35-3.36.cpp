// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;
using std::vector;
using std::reverse;



int main() {

	// Exercise 3.36

	/* Part 1

	int arr[] = { 5, 7, 8, 6, 80};

	int arr2[] = { 5, 7, 6, 8, 80 };

	int *p = arr, *p2 = arr2;

	for (auto i = 0; i < *p && *p == *p2; ++i)
	{
		if (*p == *p2)
		{
			cout << *p << " " << *p2 << " ";
			++p2;
			++p;
		}
		else {
			cout << "Not ";
		}
	}


	// Part 2

	vector<int> ivec(10, 7);
	vector<int> ivec2(10, 7);

	if (ivec == ivec2)
	{
		for (auto &c : ivec)
		{
			cout << c << endl;
		}

		for (auto &c2 : ivec2)
		{
			cout << c2;
		}

		cout << "Equal";
	}
	else
	{
		cout << "Not equal";
	}


	// Exercise 3.35

	int arr[] = {5, 7, 8, 6, 80};

	int *p = arr;

	for (auto i = 0; i < *p; ++i)
	{

		*p -= *p;

		cout << *p;

		++p;
		



	}
	
		return 0;
	}
