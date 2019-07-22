// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sales_item.h"
#include <string>

using namespace std;



struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main() {

	Sales_data data1, data2;

	double price = 0;

	cin >> data1.bookNo >> data1.units_sold >> price;

	data1.revenue = data1.units_sold * price;
	
	cin >> data2.bookNo >> data2.units_sold >> price;

	data2.revenue = data2.units_sold * price;


	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;

		cout << "Total:" << " " << data1.bookNo << " " << totalCnt << " " << totalRevenue << endl;
	}

	else
	{
		cout << "First transaction: " << data1.bookNo << " " << data1.units_sold << " " << data1.revenue << endl;

		cout << "Second transaction" << data2.bookNo << " " << data2.units_sold << data2.revenue << endl;

	}


	return 0;
}