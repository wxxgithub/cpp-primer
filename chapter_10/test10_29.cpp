#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> vstr;
	ifstream in("testext10");
	if (!in)
	{
		cout << "file can't open!" << endl;
		exit(1);
	}
	istream_iterator<string> iter(in),eof;
	ostream_iterator<string> out_iter(cout, " ");
	while (iter != eof)
	{
		vstr.push_back(*iter++);
	}
	copy(vstr.begin(), vstr.end(), out_iter);
	cout << endl;
	return 0;
}
