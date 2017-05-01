#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vint({1,2,3,4,5});
	for (auto r_iter = vint.crbegin(); r_iter != vint.crend(); ++r_iter)
	{
		cout << *r_iter << endl;
	}
	return 0;
}
