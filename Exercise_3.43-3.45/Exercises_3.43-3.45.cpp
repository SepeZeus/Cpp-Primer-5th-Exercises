// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;
using std::vector;
using std::reverse;


int main() {

	// Exercise 3.45 Part 1
/*
int ia[3][4];

for (auto &san : ia)

{
	for (auto &yon : san)
	{
		cout << yon << " " << endl;
	}
}

*/

	// Exercise 3.45 Part 2
	/*

int ia[3][4];

for (auto san = 0; san != 3; ++san)

{
	for (auto yon = 0; yon != 4; ++yon)

	{
		auto res = ia[san][yon];

		cout << res << " ";
		cout << endl;
	}

}


	int ia[3][4];

	for (auto &san : ia)

	{
		for (auto res : san)
		{
			auto uni = ia[res][res];

			cout << uni << endl;

		}
	}

	*/


	// Exercise 3.45 Part 3

	/*
int ia[3][4];



for (auto *san = ia; san != ia + 3; ++san)
{
	for (auto *yon = *san; yon != *san + 4; ++yon)

	{
		cout << *yon << endl;
	}
}

*/

	// Exercise 3.44 Part 1

	/*
	int ia[3][4];

	using son = int[4];

	for (son &san : ia)

	{
		for (int &yon : san)
		{
			cout << yon << " " << endl;
		}
	}

	*/

	// Exercise 3.44 Part 2

	/*
	int ia[3][4];

	using son = int;

	for (son san = 0; san != 3; ++san)

	{
		for (son yon = 0; yon != 4; ++yon)
		{
			son far = ia[san][yon];

			cout << far << " "; cout << endl;
		}
	}
	*/

	// Exercise 3.44 Part 3 

	/*
	int ia[3][4];

	using point = int[4];

	for (point *i = ia; i != ia + 3; ++i)
	{
		for (int *p = *i; p != *i + 4; ++p)
		{


			cout << *p << endl;
		}
	}

	*/
	//Exercise 3.43 Part 1

	/*
	int ia[3][4];


	for ( int (&san)[4] : ia)

	{
		for ( int &yon : san)
		{
			cout << yon << endl;
		}
	}

	*/
	// Exercise 3.43 Part 2
	/*
	int ia[3][4];

	for (int san = 0; san != 3; ++san)

	{
		for (int yon = 0; yon != 4; ++yon)
		{

			int far = ia[san][yon];

			cout << far << " "; cout << endl;
		}
	}
	*/


	//Exercise 3.43 Part 3

	/*
	int ia[3][4];

	int *point = &ia[0][4];
	int *d = &ia[3][0];

	for (int *i = point; i != point + 3; ++i)
	{
		for (int *p = d; p != d + 4; ++p)
		{

			int far = *i;
			int dar = *p;

			cout << far << dar << endl;
		}
	}
	*/
		return 0;
	}