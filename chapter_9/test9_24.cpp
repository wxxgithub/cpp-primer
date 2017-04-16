#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vint;
	//if ( !vint.empty() )
	//{
		cout << vint.at( 0 ) << endl;
		cout << vint[0] << endl;
		cout << vint.front() << endl;
		cout << *( vint.begin() ) << endl;
		return 0;
	//}
}
