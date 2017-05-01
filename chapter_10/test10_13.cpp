#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool fun(const string &str)
{
	return str.size() < 5 ? true : false ; 
}

int main()
{
	string str;
	vector<string> vstr;
	cout << "please input : " << endl;
	while (cin >> str)
		vstr.push_back(str);
	auto iter = partition(vstr.begin(), vstr.end(), fun);
	for( ; iter != vstr.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	return 0;
}
