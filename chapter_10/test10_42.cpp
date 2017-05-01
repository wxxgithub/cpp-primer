#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

void elimDups(list<string> &words)
{
	words.sort();
	words.unique();
}

int main()
{
	string str;
	list<string> lstr;
	cout << "please input : " << endl;
	while (cin >> str)
		lstr.push_back(str);
	elimDups(lstr);
	for (auto i : lstr)
		cout << i << " ";
	return 0;
}
