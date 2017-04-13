#include <iostream>
#include <string>
#include "Sales_data7_2.h"

using namespace std;

int main()
{
	string s="a ha!";
	Sales_data total1, total2(s), total3(s, 10, 1), total4(cin);
	print(cout, total1);
	print(cout, total2);
	print(cout, total3);
	print(cout, total4);
	return 0;	
}
