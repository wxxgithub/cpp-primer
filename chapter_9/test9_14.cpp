#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<char*> ilist{"this", "is", "a", "sad", "story!"};
	vector<string> ivstr;
	ivstr.assign( ilist.begin(), ilist.end() );
	for (auto i : ivstr )
		cout << i << " ";
}
