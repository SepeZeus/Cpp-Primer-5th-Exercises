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

	std::vector<int> iv;
	int i;
	while (std::cin >> i)
		iv.push_back(i);
	for (const auto & k : iv)
		std::cout << k << " ";
	std::cout << std::endl;

		return 0;
	}

