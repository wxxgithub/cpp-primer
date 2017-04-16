#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int i;
	vector<int> vint1, vint2;
	cout << "please input a vint1: " << endl;
	while ( cin >> i )
		vint1.push_back( i );
	cin.clear();
	cout << "please input a vint2: " << endl;
	while ( cin >> i )
		vint2.push_back( i );
	if ( vint1 == vint2 )
		cout << "vint1 == vint2 ";
	else
		cout << "vint1 != vint2 ";
	return 0;
	
}
