// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"
#include <string>

using namespace std;

int main() {

	string s;

	cin >> s;

	for (auto &c : s)

	{
		if (!ispunct(c))

		cout << c;
	}

		return 0;
	}

