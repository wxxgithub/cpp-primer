#include <iostream>
#include "Sales_item.h" 
using namespace std;
int main()
{
	Sales_item item1, item2;
	cout << "请输入两个ISBN的Sales_item对象：" << endl;
	cin >> item1 >> item2;
	if ( item1.isbn() == item2.isbn() )
	{
		cout << item1 + item2 << endl;	
		return 0;
	}
	else
	{
		cerr << "请输入两个ISBN的对象：" << endl;
		return -1;
	}
}


