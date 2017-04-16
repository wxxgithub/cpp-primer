#include <iostream>
#include <string>

using namespace std;

int fun(string &s, string oldVal, string newVal)
{
	string str;
	for (auto iter = s.begin(); iter != s.end(); ++iter)
	{
		 str = s.substr(iter - s.begin(), oldVal.size());
		 if (str == oldVal)
		 {
			auto i = iter - s.begin();
			s.replace(i, oldVal.size(), newVal);
			iter += newVal.size();
		 }
	}
	return 0;
}

int main()
{
	string s("I tho this question."), oldVal("tho"), newVal("though");
	fun(s, oldVal, newVal);
	cout << s;
	return 0;
}
