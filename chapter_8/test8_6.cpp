#include <iostream>
#include <fstream>
#include "Sales_data.h"

using namespace std;

int main( int argc, char *argv [ ] )
{
	ifstream in(argv[1]);
	Sales_data total;
	if ( in  >> total )
	{
		Sales_data trans;
		while ( in >> trans )
		{
			if ( total.isbn() == trans.isbn() )
				total += trans;
			else
			{
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;
	}
	else
	{
		cerr << "No data?! " << endl;
		return -1;
	}
	return 0;
}
