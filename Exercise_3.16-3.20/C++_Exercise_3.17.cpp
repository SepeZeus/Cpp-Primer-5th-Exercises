// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"
#include <string>
#include <vector>

using namespace std;
using std::vector;

int main() {

	vector<string> s;
	string str;

	while (cin >> str)
	{
		s.push_back(str);

		for (auto &elem : s)
		{
			for (auto &c : elem)
			{

				c = toupper(c);

				cout << c;

			}

		}
	}
	return 0;
}

