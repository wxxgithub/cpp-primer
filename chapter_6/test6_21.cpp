#include <iostream>

using namespace std;

int fun1(int a,int *b)
{
	if ( a > *b)
		return a;
	else
		return *b;
}

int main()
{
	int a,b;
	cout << "please input two number: " << endl;
	cin >> a >> b;
	cout << "max: " << fun1( a, &b) << endl;
	return 0;
}
