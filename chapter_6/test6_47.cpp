#include <iostream>
#include <vector>
#include <string>
#define NDEBUG
using namespace std;

void fun1( vector<string> vstr, size_t index)
{
	if ( index != vstr.size() - 1 )
	{
	#ifndef NDEBUG
		cout << vstr.size() << endl;
	#endif
		fun1( vstr, index+1);	
	}
	else
		cout << vstr[index];
}

int main()
{
	string str;
	vector<string> vstr;
	while( cin >> str )
		vstr.push_back( str );
	fun1(vstr, 0);

	return 0;
}
