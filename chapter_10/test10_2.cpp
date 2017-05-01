#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	string str,sval;
	list<string> lstr;
	cout << "please input a number of int :" << endl;
	while (cin >> str)
		lstr.push_back(str);
	cin.clear();
	cout << "please input a val: " << endl;
	cin >> sval;
	cout << "val's count :" << count(lstr.cbegin(), lstr.cend(), sval)
		 << endl;
	return 0;
}
