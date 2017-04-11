#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[4]={1,2,3,4};
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
	vector<int> a(begin(arr),end(arr));
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}
