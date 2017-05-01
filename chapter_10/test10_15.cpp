#include <iostream>

using namespace std;

int main()
{
	int i1, x=10;
	cout << "please input : " << endl;
	cin >> i1;
	auto f = [x] (int a) { return a + x; };
	cout << f(i1) << endl;
	return 0;
}
