#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int i;
	vector<int> a,b;
	while ( cin >> i)
		a.push_back(i);
	while ( cin >> i)
		b.push_back(i);
	for (auto i : a)
		cout << i << " ";
	cout << endl;
	for (auto i : b)
		cout << i << " ";
	cout << endl;
}
