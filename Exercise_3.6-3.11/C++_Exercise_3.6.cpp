// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"
#include <string>

using namespace std;


int main() {

	string s("Hello World");
	string s2 = "x";

	for (auto c : s)

		if (isspace(c))
		{
			cout << " ";
		}
		else
		{
			cout << "X";
		}

		return 0;
	}

