#include <iostream>
using namespace std;

void fun1( int *a, int *b)
{
	int *swap = a;
	a = b;
	b = swap;
	cout << "a ha :"<< *a << " " << *b << endl;
	
}

int main()
{
	int a,b;
	cout << "please input two int : " << endl;
	cin >> a >> b;
	fun1( &a, &b);
	cout << "int: " << a << " " << b << endl;
	return 0;
}
