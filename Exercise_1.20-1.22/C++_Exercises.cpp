// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"


using namespace std;

int main()
{

	Sales_item book, book2;

	cin >> book >> book2;

	cout << " " << endl << "Items:" << endl << book << endl << book2 << endl << endl;

	cout << "Total sum of the purchase:" << endl << book + book2 << endl;
	return 0;
}
