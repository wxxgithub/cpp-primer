#include <iostream>
using namespace std;

int fact(int val)
{
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}

int fun()
{
	int i;	
	cout << "please input a number:" << endl;
	cin >> i;
	return fact(i);
	
}

int main()
{
	cout << fun();
	return 0;
}

