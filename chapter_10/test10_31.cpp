#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int i;
	vector<int> vint;
	cout << "please input : " << endl;
	while (cin >> i)
		vint.push_back(i);	
	ostream_iterator<int> out_iter(cout, " ");
	sort(vint.begin(), vint.end());
	unique_copy(vint.begin(), vint.end(), out_iter);
	cout << endl;
	return 0;
}
