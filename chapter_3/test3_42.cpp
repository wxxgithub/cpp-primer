#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a;
	int arr[5];
	for (auto i=0;i<5;++i)
		a.push_back(i);
	for (auto i : a)
		cout << i << " ";
	cout << endl;

}
