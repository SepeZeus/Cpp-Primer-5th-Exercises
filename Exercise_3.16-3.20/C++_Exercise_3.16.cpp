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

	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10,42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };

	for (auto &i : v1, v2, v3, v4, v5)

		if (!v1.empty())
		{
			cout << i << endl;
		}
		else
		{
			cout << "Empty" << endl;
		}

	for (auto &i : v2)

		if (!v2.empty())
		{
			cout << i << endl;
		}
		else
		{
			cout << "Empty" << endl;
		}

	for (auto &i : v3)

		if (!v3.empty())
		{
			cout << i << endl;
		}
		else
		{
			cout << "Empty" << endl;
		}

	for (auto &i : v4)

		if (!v4.empty())
		{
			cout << i << endl;
		}
		else
		{
			cout << "Empty" << endl;
		}

	for (auto &i : v5)

		if (!v5.empty())
		{
			cout << i << endl;
		}
		else
		{
			cout << "Empty" << endl;
		}

	for (auto &i : v6)

		if (!v6.empty())
		{
			cout << i << endl;
		}
		else
		{
			cout << "Empty" << endl;
		}

	for (auto &i : v7)

		if (!v7.empty())
		{
			cout << i << endl;
		}
		else
		{
			cout << "Empty" << endl;
		}

			return 0;
		}