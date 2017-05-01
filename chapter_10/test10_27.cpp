#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	int i;
	vector<int> vint;
	list<int> lint;
	cout << "please input : " << endl;
	while (cin >> i)
		vint.push_back(i);
	unique_copy(vint.cbegin(), vint.cend(), front_inserter(lint));
	for (auto i : lint)
		cout << i << " ";
	cout << endl;
	return 0;
}
