#include <iostream> 
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
	fun( cin );
	return 0;
}

