#include <iostream>

using namespace std;

void print1(const int *cp)
{
	cout << *cp << endl;
}

void print2(const int *beg, const int *end)
{
	while (beg != end)
		cout << *beg++ << " ";
	cout << endl;
}

void print3(const int ia[], size_t size)
{
	for (size_t i=0; i != size ; ++i)
		cout << ia[i] << " ";
	cout << endl;
}

int main()
{
	int i = 0, j[2] = { 0, 1};
	print1(&i);
	print2(begin(j),end(j));
	print3(j, end(j)-begin(j));
	return 0;

}
