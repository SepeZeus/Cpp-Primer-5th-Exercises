// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using std::vector;
using std::reverse;

int main() {


	/* Exercise 3.32 Part 2
	vector<int> ivec;

	for (int i = 0; i != 10; ++i)
	{
		ivec.push_back(i);
	}

	for (auto c : ivec)
	{
		cout << c;
	}
	*/
	



	/* Exercise 3.32 Part 1

	int scores[10] = {};



	for (int i = 0; i != 10; ++i)
	{

		i = scores[i] + i;
		cout << i << " ";

	}

	cout << endl;

	int *beg = begin(scores);
	int *pend = end(scores);

	int *arr = scores;

	while (beg != pend)
	{
		cout << *arr;

		++beg;
		++arr[0];

	}


	*/

	/* Exercise 3.31
	int scores[10] = {};



	for (int i = 0; i != 16; ++i)
	{

		i = scores[i] + i;
		cout << i;
	}
	*/

		return 0;

	}
