#include <iostream>
using namespace std;
int main()
{
	int i=0,i1=0,j=0,j1=0;
	int a[5],b[5];
	cout << "please input a[5] , b[5] :" << endl;
	while (cin >> i)
	{
		*(a+j) = i;
		++j;
		if (j == 5)
			break;
	}
	while (cin >> i1)
	{
		*(b+j1) = i1;
		++j1;
	}
	for (auto k : a)
		cout << k << " ";
	cout << endl;	
	for (auto l : b)
		cout << l << " ";
	cout << endl;
	for (int num = 0 ; num < 5 ; ++num  )
		if (a[num] != b[num])
		{
			cout << " a[5] != b[5] ";
			return -1;
		}
	cout << "a[5] == b[5] " << endl;
	return 0;
}
