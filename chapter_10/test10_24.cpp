#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool check_size(const int &s, string::size_type sz)
{
	return s >= sz;
}

int main()
{
	int i;
	string str;
	vector<int> vint;
	cout << "please input a string: " << endl;
	cin >> str;
	cout << "please input a vector<int>: " << endl;
	while (cin >> i)
		vint.push_back(i);
	auto wc = find_if(vint.begin(), vint.end(), \
		    bind(check_size, _1, str.size()) );
	cout << "the first number:" << *wc << endl;
	return 0;
}
