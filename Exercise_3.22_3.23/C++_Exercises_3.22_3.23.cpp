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
	// Exercise 3.23
	vector<int> ivec;

	for (int it = 0; it < 10; ++it)
	{
		ivec.push_back(it);
		cout << it << " ";
	}
	cout << endl;

	for (auto c : ivec)
	{
		c += c;

		cout << c << " ";
	}



return 0;
 
}


/* Exercise: 3.22 vector<string> text{ "heleleo sdjdj" };

for (auto it = text.cbegin();
	it != text.cend() && !it->empty(); ++it)

	for (auto c : *it)
	{
		c = toupper(c);

		cout << c << endl;
	}
	*/