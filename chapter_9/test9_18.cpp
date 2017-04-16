#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
	string str;
	deque<string> deq;
	while ( cin >> str )
		deq.push_back( str );
	for ( auto i = deq.cbegin(); i != deq.cend(); ++i )
		cout << *i << " ";
	cout << endl;
	return 0;
}
