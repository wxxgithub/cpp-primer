#include <iostream>

using namespace std;

void reset(int &i)
{
	i = 0;
}
int main()
{
	int i;
	cout << "please input a number:" << endl;
	cin >> i;
	reset(i);
	cout << "i = " << i << endl;
	return 0;
}
