#include <iostream> 
#include <sstream>
#include <string>

using namespace std;

istream &fun( istream &is )
{
	string str;
	getline(is,str);
	cout << str;
	is.clear();
	return is;
}
int main()
{
	string str;
	getline( cin, str);
	istringstream isstr( str );
	fun( isstr );
	return 0;
}

