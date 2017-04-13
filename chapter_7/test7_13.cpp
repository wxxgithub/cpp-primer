#include <iostream>
#include "Sales_data7_2.h"

using namespace std;

int main()
{
	Sales_data total(cin);
	Sales_data trans(cin);
	
		if ( total.isbn() == trans.isbn() )
			total.combine(trans);
		else
		{
			cout << total.bookNo << " " << total.units_sold << " "
				 << total.revenue << endl;
		}
	
			cout << trans.bookNo << " " << trans.units_sold << " "
				 << trans.revenue << endl;
	return 0;
}
