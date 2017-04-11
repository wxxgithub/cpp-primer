#include <iostream>

using namespace std;

int main()
{
	int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	cout << "ia[3][4] = (使用范围ｆｏｒ语句) " << endl;
	for (int (&p)[4] : ia)
		for (int &q : p)
			cout << q << " ";
	cout << endl;
	cout << "ia[3][4] = (使用下标运算符) " << endl;
	for (int i = 0 ; i != 3 ; ++i)
		for (int j = 0 ; j != 4 ; ++j)
			cout << ia[i][j]  << " ";
	cout << endl;
	cout << "ia[3][4] = (使用指针) " << endl;
	for (int (*p)[4] = ia ; p != ia + 3 ; ++p)
		for (int *q = *p ; q != *p + 4 ; ++q)
			cout << *q << " ";
	cout << endl;
}
