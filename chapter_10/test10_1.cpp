#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int i,val;
	vector<int> vint;
	cout << "please input a number of int :" << endl;
	while (cin >> i)
		vint.push_back(i);
	cin.clear();
	cout << "please input a val: " << endl;
	cin >> val;
	cout << "val's count :" << count(vint.cbegin(), vint.cend(), val)
		 << endl;
	return 0;
}
