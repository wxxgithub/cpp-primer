#include <iostream>

using namespace std;

int fun1(initializer_list<int> lst)
{
	int cnt;
	for (auto beg = lst.begin(); beg != lst.end() ; ++beg)
		cnt += *beg;
	return cnt;
}

int main()
{
	cout << "please input a int arry: " << endl;
	cout << "total cnt: " << fun1({0,1,2,3,4,5,6,7,8,9}) << endl;
	return 0;
}
