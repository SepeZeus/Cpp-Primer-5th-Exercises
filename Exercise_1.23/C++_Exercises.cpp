// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"


using namespace std;

int main()
{

	Sales_item item, item2, item3;

	cin >> item >> item2 >> item3;

	if ((item.isbn() == item2.isbn()) && (item.isbn() == item3.isbn()))
	{
		cout << "Transaction amount with this ISBN is:" << endl << item + item2 + item3 << endl;
	}

	else
	{
		if (item.isbn() == item2.isbn())
		{
			cout << "Transaction amount with this ISBN is:" << endl << item + item2 << endl << item3;
		}

		else
		{
			if (item.isbn() == item3.isbn())
			{
				cout << "Transaction amount with this ISBN is:" << endl << item + item3 << endl << item2;

			}
			else
			{
				if (item2.isbn() == item3.isbn())
				{
					cout << "Transaction amount with this ISBN is:" << endl << item2 + item3 << endl << item;
				}
				else
				{
					cout << item << endl << item2 << endl << item3;
				}
			}
		}
	}





			return 0;
		}