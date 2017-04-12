#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool fun1(const string &str)
{
	for (auto i : str)
		if (isupper(i))
			return true;
	return false;
}

void fun2(string &str)
{
	for (auto &i : str)
		if ( isupper(i) )
			i = tolower(i);
}

int main()
{
	string str;
	cout << "please input a string: " << endl;
	cin >> str;
	fun2(str);
	cout << str ;
	/*if ( fun1(str) )
		cout << "yes!";
	else
		cout << "no! ";*/
	cout << endl;
}
