#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

int main()
{
	string str;
	vector<string> vstr;
	cout << "please input : " << endl;
	while (cin >> str)
		vstr.push_back(str);
	elimDups(vstr);
	for (auto i : vstr)
		cout << i << " ";
	cout << endl;
	return 0;
}
