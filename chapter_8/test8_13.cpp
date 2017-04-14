#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo 
{
	string name;
	vector<string> phones;
};

int main()
{
	string line, word;
	vector<PersonInfo> people;
	istringstream record;
	ifstream in( "filetest8_11" );
	while ( getline( in, line ) )
	{
		PersonInfo info;
		record.clear();
		record.str( line );
		record >> info.name;
		while ( record >> word )
		{
			info.phones.push_back( word );
			cout << word << " ";
		}
		people.push_back( info );
	}
	return 0;
}
