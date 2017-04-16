#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name("ab2c3d7R4E6"), numbers("0123456789");
	cout << "string: " << name << endl;
	string::size_type pos = 0;
	while ((pos = name.find_first_of(numbers, pos)) != string::npos)
	{
		cout << "found number at index: " << pos 
			 << " element is " << name[pos] << endl;
		++pos;
	}
	pos = 0;
	while ((pos = name.find_first_not_of(numbers, pos)) != string::npos)
	{
		cout << "found aplhabet at index: " << pos 
			 << " element is " << name[pos] << endl;
		++pos;
	}
	return 0;
}
