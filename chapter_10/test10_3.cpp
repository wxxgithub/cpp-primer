#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	int i;
	vector<int> vint;
	cout << "please input a number of int :" << endl;
	while (cin >> i)
		vint.push_back(i);
	cout << "sum = " << accumulate(vint.cbegin(), vint.cend(), 0)
		 << endl;
	return 0;
}
