#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
	list<int> lint{1,2,3,4,5,6,7,8,9};
	deque<int> dint1, dint2;
	for ( auto i : lint )
		if ( i%2 == 0 )
			dint2.push_back( i );
		else
			dint1.push_back( i );
	for ( auto i : dint1 )
		cout << i << " ";
	cout << endl;
	for ( auto i : dint2 )
		cout << i << " ";
	return 0;
}
