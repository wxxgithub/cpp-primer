#include <iostream>

using namespace std;

int fun()
{
	static int cnt=0;
	return cnt++;
}
int main()
{
    for (int i = 0; i!=10; ++i)	
		cout << fun() << endl;
	return 0;
}
