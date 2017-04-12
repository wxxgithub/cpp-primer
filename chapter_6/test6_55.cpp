#include <iostream>	
#include <vector>

using namespace std;

int fun1(int a, int b)
{
	return a+b;
}

int fun2(int a, int b)
{
	return a-b;
}

int fun3(int a, int b)
{
	return a*b;
}

int fun4(int a, int b)
{
	return a/b;
}

int main()
{
	vector<decltype(fun1)*> str;
	str.push_back(&fun1);
	str.push_back(&fun2);
	str.push_back(&fun3);
	str.push_back(&fun4);
	for ( auto i : str)
		cout << (*i)(1,2) <<endl;
	return 0;
}
