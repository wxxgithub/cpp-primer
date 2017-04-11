#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string str,str1;
	cout << "请输入一串字符：" << endl;
	while (cin >> str)
		;
	for (auto c : str)
		if ( !ispunct(c) )
				str1 = str1 + c;
	cout << "处理后的字符串为:" << endl << str1;
	return 0;
}




