#include <iostream>
#include <vector>

using namespace std;

std::vector<int>::const_iterator fun( vector<int> &vint, int num)
{
	std::vector<int>::const_iterator iter;
	for ( iter = vint.cbegin(); iter != vint.cend(); ++iter )
		if ( num == *iter)
			return iter;
	return iter;
}
int main()
{
	int i;
	vector<int> vint;
	cout << "please input a vector<int> : " << endl;
	while ( cin >> i )
		vint.push_back(i);
	cin.clear();
	cout << "please input a find int : " << endl;
		cin >> i;
	if ( fun( vint, i ) == vint.cend() )
		cout << "no!" << endl;
	else
		cout << *fun( vint, i) << endl;
	return 0;
}

