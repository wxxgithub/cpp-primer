#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a[10];
	vector<int> b;
	for ( int i=0 ; i < 10 ; ++i )
			a[i] = i;
	for (auto i : a)
		b.push_back(i);	
	for (auto it = b.cbegin() ; it != b.cend() ; ++it)
		cout << *it << " ";
	cout << endl;
}
