#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	list<int> vint({1,2,3,4,5,6,7,8,9}),vint1,vint2,vint3;
	vint1.resize(9);vint2.resize(9);vint3.resize(9);
	copy(vint.cbegin(), vint.cend(), inserter(vint1, vint1.begin()));
	copy(vint.cbegin(), vint.cend(), back_inserter(vint2) );
	copy(vint.cbegin(), vint.cend(), front_inserter(vint3) );
	for(auto i : vint1)
		cout << i << " ";
	cout << endl;
	for(auto i : vint2)
		cout << i << " ";
	cout << endl;
	for(auto i : vint3)
		cout << i << " ";
	cout << endl;
	return 0;
}
