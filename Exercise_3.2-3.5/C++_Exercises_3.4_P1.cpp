// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"
#include <string>

using namespace std;


int main() {

	string str, s1;

	cin >> str >> s1;

	cout << str << s1 << endl;

	if (str == s1)

	{
		cout << " Strings are equal";
	}

	else
	{
		if (str > s1)
		{
			cout << "string1 is greater than string 2" << endl;
		}

		else
		{
			cout << "String 2 is greater than string 1";
		}


		return 0;
	}
}