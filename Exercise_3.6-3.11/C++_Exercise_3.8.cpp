// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"
#include <string>

using namespace std;

int main() {

	string s("hello world");

	decltype(s.size()) index = 0;

	while (index != s.size())
	{

		cout << "x";
		index += 1;


	}

		return 0;
	}

