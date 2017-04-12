#include <iostream>
#include <cmath>
using namespace std;

int fun(double i)
{
	cout << abs(i);
	return 0;
}
int main()
{
	double d;
	cout << "please input a number:" << endl;
	cin >> d;
	fun(d);
	return 0;
}
