#include <iostream>
#include <string>

using namespace std;
string fun(string name, string prefix, string postfix)
{
	name.insert(0, prefix);
	return name.insert(name.size(), postfix);
	
}

int main()
{
	string name("Wang"), prefix("Miss"), postfix("III");
	name = fun(name, prefix, postfix);
	cout << name;
	return 0;
}
