// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"
#include <string>

using namespace std;


int main() {

	string line;

		while (getline(cin, line))
			cout << line << endl;
	return 0;
}