// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;
using std::vector;
using std::reverse;


int main() {

	// Exercise 3.25

	vector<unsigned> scores;
	
	unsigned grade;
	
	while (cin >> grade)
	{

		
				scores.push_back(grade / 10);

				for (auto &i : scores)

				{

					cout << i << endl;


				}

				
	}

		return 0;
	}