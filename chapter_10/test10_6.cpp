#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vint({0,1,2,3,4,5,6});
	fill_n(vint.begin(), vint.size(), 0);
	for (auto i : vint)
		cout << i << " ";
	cout << endl;
}
