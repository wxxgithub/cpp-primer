#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Sales_data.h"

using namespace std;

/*bool compareIsbn1(const Sales_data &data1, const Sales_data &data2)
{
	return data1.isbn() < data2.isbn();
}*/

int main()
{
	Sales_data data1(cin), data2(cin);
	vector<Sales_data> vdata;
	vdata.push_back(data1);vdata.push_back(data2);
	cout << "Sales_data:" << endl;
	for (const auto &i : vdata)
		cout << i << " ";
	cout << endl;
	stable_sort(vdata.begin(), vdata.end(), [](const Sales_data &data1, const Sales_data &data2) { return data1.isbn() < data2.isbn(); });
	for (const auto &i : vdata)
		cout << i << " ";
	cout << endl;
	return 0;
}
