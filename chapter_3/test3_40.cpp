#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[] = "wo shi ni da ye ,";
	char str2[] = "no no no!";
	char str3[strlen(str1) + strlen(str2)];
	cout << "第一个字符串的长度为：" << strlen(str1) <<  endl;
	cout << "第二个字符串的长度为：" << strlen(str2) <<  endl;
	for (auto i : str1)
		cout << i;
	cout << endl;
	for (auto i : str2)
		cout << i;
	cout << endl;
	cout << strlen(str3) << endl;
	strcpy(str3,str1);
	cout << strcat(str3,str2) << endl;
	cout << strlen(str3) << endl;
	return 0;

}
