#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int i;
	vector<int> vint1;
	list<int> lint1;
	cout << "please input a vint1: " << endl;
	while ( cin >> i )
		vint1.push_back( i );
	cin.clear();
	cout << "please input a lint1: " << endl;
	while ( cin >> i )
		lint1.push_back( i );
	auto minsize = vint1.size();
	if ( minsize > lint1.size())
		minsize = lint1.size();
	for( i = 0; i < minsize; ++i)
		if ( vint1[i] > lint1[i] )
		{	cout << "vint1 > lint1 "; return 0; }
		else if ( vint1[i] < lint1[i] )
		{	cout << "vint1 < lint1 "; return 0; }
	return 0;
	
}
