#include <iostream>
using namespace std;

int fact1(int val)
{
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}

int main()
{
	cout << fact1(5) << endl;	
}

