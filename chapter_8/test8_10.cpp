#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main( )
{
	string line, word;
	vector<string> vstr;
	ifstream in( "filetest" );
	while ( getline( in, line ) )
		vstr.push_back( line );
	for (auto i : vstr )
	{
		istringstream record( i );
		while ( record >> word )
			cout << word << " ";
	}
	return 0;
}
