#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
	string str;
	list<string> deq;
	while ( cin >> str )
		deq.push_back( str );
	for ( auto i = deq.cbegin(); i != deq.cend(); ++i )
		cout << *i << " ";
	cout << endl;
	return 0;
}
