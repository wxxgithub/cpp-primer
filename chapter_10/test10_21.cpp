#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	auto f = [x] () mutable -> bool 
			 { while (x >= 0)
			 	if (x == 0) 
					return true; 
				else 
					--x; };
	cout << f() << endl;
	return 0;
}
