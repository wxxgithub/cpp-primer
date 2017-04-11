#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	cout << "请输入两个字符串：" << endl;
	cin >> str1 >> str2;

	if (str1 > str2)
		cout << " > " << endl;
	else if(str1 < str2)
		cout << " < " << endl;
	else
		cout << " = " << endl;
	return 0;
}
