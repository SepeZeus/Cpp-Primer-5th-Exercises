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




	const int MAX_NB_INTEGERS = 6;

	vector<int> v;

	int number;
	for (int i = 0; i < MAX_NB_INTEGERS; ++i)
	{
		cin >> number;
		v.push_back(number);
	}

	for (decltype(v.size()) i = 0; i < v.size(); i += 2)
	{
		std::cout << v[i] + v[i + 1] << " ";
	}
	std::cout << endl;

	for (decltype(v.size()) i = 0; i < v.size() / 2; ++i)
	{
		std::cout << v[i] + v[v.size() - 1 - i] << " ";
	}
	std::cout << endl;

return 0;
 
}

