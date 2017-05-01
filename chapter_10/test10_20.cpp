#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	vector<string> vstr;
	cout << "please input : " << endl;
	while (cin >> str)
		vstr.push_back(str);
	auto cnt = count_if(vstr.cbegin(), vstr.cend(), [](const string &s) \
					{ return s.size() > 6; } );
	cout << "the number od words more than 6 , count :" << cnt << endl;
	return 0;
}
