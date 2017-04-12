#include <iostream>

using namespace std;

int count_calls(int i)
{
	static int ctr = 0;
	
	return (ctr++) + i;
}

int main()
{
	for (int i=0; i != 10 ; ++i)
		cout << count_calls(i) << endl;
	return 0;
}
