#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[80], str2[80];
	cout << "请输入两个字符串：" << endl;
	cin >> str1 >> str2;
	auto result = strcmp(str1, str2);
	switch (result)
	{
		case 1:
			cout << " > " << endl;
			break;
		case -1:
			cout << " < " << endl;
			break;
		case 0:
			cout << " = " << endl;
		default:
			cout << " no" << endl;
			break;
	}
	return 0;
}
