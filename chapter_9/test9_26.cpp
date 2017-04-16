#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
	vector<int> vint;
	list<int> lint;
	for (auto i : ia)
	{
		vint.push_back(i);
		lint.push_back(i);
	}
	auto it = vint.begin();
	while (it != vint.end())
		if (*it % 2)
			++it;
		else
			it = vint.erase(it);
	auto it1 = lint.begin();
	while (it1 != lint.end())
		if (*it1 % 2)
			it1 = lint.erase(it1);
		else
			++it1;
	for (auto i : vint)
		cout << i << " ";
	cout << endl;
	for (auto i : lint)
		cout << i << " ";

}
