#include <iostream>
#include <string>
#include <forward_list>

using namespace std;
int fun(forward_list<string> &flst, string str1, string str2)
{
	if (!flst.empty())
	{
		auto curr = flst.begin();
		auto pre = curr;
		while (curr != flst.end())
			if (*curr == str1)
			{	curr = flst.insert_after(curr, str2); return 0; }
			else
			{	pre = curr; ++curr; }
		flst.insert_after(pre, str2);
		return 0;
	}
}
int main()
{
	forward_list<string> flst = {"who", "am", "i", "!"};
	fun(flst, "i", "it is me!");
	for (auto i : flst)
		cout << i << " ";
	cout << endl;
	fun(flst, "a", "it is me!");
	for (auto i : flst)
		cout << i << " ";
	cout << endl;
	return 0;
}
