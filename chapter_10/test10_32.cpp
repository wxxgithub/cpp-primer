#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_item.h"

using namespace std;


bool compareIsbn1(const Sales_item &data1, const Sales_item &data2)
{
	return data1.isbn() < data2.isbn();
}

int main()
{
	Sales_item total;
	vector<Sales_item> vSales;
	while (cin >> total)
		vSales.push_back(total);
	sort(vSales.begin(), vSales.end(), compareIsbn1);
	for (const auto &i : vSales)
		cout << i << "//";
//	auto &iter = vSales.begin();
//	while (iter != vSales.end())
//		find(vSales.cbegin(), vSales.cend(), *iter);
		

	return 0;
}

