#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cout << "请输入一串字符：" << endl;
	while (cin >> str)
		;
	for (auto &c : str)
		c = 'X';
	cout << "处理后的字符串为:" << endl << str;
	return 0;
}




