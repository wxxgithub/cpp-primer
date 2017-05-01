#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vint({1,2,3,4,5});
	for (auto iter = vint.cend()-1; iter != vint.cbegin()-1; --iter)
	{
		cout << *iter << endl;
	}
	return 0;
}
