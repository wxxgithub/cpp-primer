#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	list<int> lint({1,0,2,1,1,1});
	auto riter = find(lint.rbegin(), lint.rend(), 0);
	for (auto iter = riter; iter != lint.rend(); ++iter)
		cout << *iter << endl;
	return 0;
}
