#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vint({0,1,2,3,4,5,6,7,8,9});
	list<int> lint;
	copy(vint.cbegin() + 3,vint.cbegin() + 7, front_inserter(lint));
	for (auto i : lint)
		cout << i << endl;
	return 0;
}
