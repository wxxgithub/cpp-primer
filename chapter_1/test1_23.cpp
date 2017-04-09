#include <iostream>
#include "Sales_item.h" 
using namespace std;

int main()
{
	Sales_item trans1, trans2;
	int num = 1;
	cout << "please input some sale records:" << endl;
	if ( cin >> trans1 )
		while ( cin >> trans2 )
			if ( compareIsbn( trans1, trans2) )
				num++;
			else
			{
				cout << trans1.isbn() << "common " << num << "sales records" << endl;
				trans1 = trans2;
				num = 1;
			}
		   else
		   {
		   		cout << "no records" << endl;
				return -1;
		   }
		   return 0;
}


