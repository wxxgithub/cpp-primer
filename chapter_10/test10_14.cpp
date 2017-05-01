#include <iostream>

using namespace std;

int main()
{
	int i1, i2;
	cout << "please input : " << endl;
	cin >> i1 >> i2;
	auto f = [] (int a, int b) { return a + b; };
	cout << f(i1, i2) << endl;
	return 0;
}
