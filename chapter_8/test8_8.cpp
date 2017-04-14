#include <iostream>
#include <fstream>
#include "Sales_data.h"

using namespace std;

int main( int argc, char *argv [ ] )
{
	ifstream in(argv[1]);
	ofstream out(argv[2], ofstream::app);
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
				out << total << endl;
				total = trans;
			}
		}
		out << total << endl;
	}
	else
	{
		out << "No data?! " << endl;
		return -1;
	}
	return 0;
}
