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

	vector<string> v1;

	string str;

	while (cin >> str)

	{
		v1.push_back(str);

		cout << str << endl;
	}

		return 0;
	}

