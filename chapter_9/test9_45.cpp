#include <iostream>
#include <string>

using namespace std;
string fun(string name, string prefix, string postfix)
{
	name.insert(name.begin(), prefix.begin(), prefix.end());
	return name.append(postfix);
}

int main()
{
	string name("Wang"), prefix("Mr"), postfix("II");
	name = fun(name, prefix, postfix);
	cout << name;
	return 0;
}
