#include <iostream>
#include <string>
using std::cin;using std::cout;using std::endl;
using std::string;

int main()
{
	string str1,str2;
	while (cin >> str1 >> str2)
	{
	if (str1.size() == str2.size())
		cout << "输入的两个字符串长度相等！" << endl;
	else if (str1.size() > str2.size())
		cout << "输入的两个字符串长度较大的为:" << str1 << endl;
	else 
		cout << "输入的两个字符串长度较大的为:" << str2 << endl;

	}
	return 0;
}




