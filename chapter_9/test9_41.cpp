#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<char> vchar = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	string str;
	for (auto i : vchar)
		str = str + i;
	cout << str;
	return 0;
}
