#include <iostream>
#include "Sales_item.h" 
using namespace std;
int main()
{
	Sales_item item, item1;
	cout << "请输入多个ISBN的Sales_item对象：" << endl;
	cin >> item1;
	while ( cin >> item)
		if ( item1.isbn() == item.isbn() )
			item1 += item;
		else
		{
			cerr << "请输入具有相同ISBN的对象：" << endl;
			return -1;
		}
	cout << item1 << endl;
	return 0;
}


