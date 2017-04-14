#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string str;
	vector<string> vstr;
	ifstream in("filetest");
	if ( in )
		while ( getline( in, str) )
				vstr.push_back( str );
	for ( auto i : vstr)
		cout << i << endl;
	return 0;
}
