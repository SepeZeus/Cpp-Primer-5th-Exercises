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

	// Exercise 4.6

	int i = 0;

	while (cin >> i)
	{

		if (i % 2 > 0)
		{
			cout << "Odd";
		}

		else {

			cout << "Even";
		}

	}


	// Exercise 4.7
	
	short SV = 32767;

	SV += 1;
	SV *= SV;
	SV = SV % 32768;



		return 0;
	}