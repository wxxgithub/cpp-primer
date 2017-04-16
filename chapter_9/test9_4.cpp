#include <iostream>
#include <vector>

using namespace std;

bool fun( vector<int> &vint, int num)
{
	for ( auto iter = vint.cbegin(); iter != vint.cend(); ++iter )
		if ( num == *iter)
			return true;
		else
			return false;
}
int main()
{
	int i;
	vector<int> vint;	
	while ( cin >> i )
		vint.push_back(i);
	cout << fun( vint, 1) << endl;
	return 0;
}

