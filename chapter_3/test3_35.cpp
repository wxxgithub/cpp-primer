#include <iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5};
	cout << "a[] = ";
	for (auto i : a)
		cout << i << " ";
	cout << endl;
	for ( int i = 0 ; i < 5 ; ++i )
		*(a + i) = 0;

	for (auto i : a)
		cout << i << " ";
	cout << endl;
}
