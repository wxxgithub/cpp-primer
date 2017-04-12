#include <iostream>

using namespace std;

int fun6_10(int *p,int *q)
{
	int n;
	n = *p;
	*p = *q;
	*q = n;
	return 0;
}

int main()
{
	int i,j;
	cout << "please input two number: " << endl;
	cin >> i >> j;
	cout << "input one : " << i << endl
		 << "inout two : " << j << endl;
	fun6_10( &i, &j);
	cout << "result : " << endl << i << " " << j << endl;
	return 0;
}
