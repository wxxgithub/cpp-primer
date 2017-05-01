#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool fun(const string &s)
{
	return s.size() > 6;
}

int main()
{
	string str;
	vector<string> vstr;
	cout << "please input : " << endl;
	while (cin >> str)
		vstr.push_back(str);
/*	auto cnt = count_if(vstr.cbegin(), vstr.cend(), [](const string &s) { return s.size() > 6; } ); */
	auto cnt = count_if(vstr.cbegin(), vstr.cend(), bind(fun, _1));
	cout << "the number od words more than 6 , count :" << cnt << endl;
	return 0;
}
