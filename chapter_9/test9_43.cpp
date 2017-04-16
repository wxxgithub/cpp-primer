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
			iter = s.erase(iter, iter+ oldVal.size());
		 	for (auto i : newVal)
			{
				iter = s.insert(iter, i);
				++iter;	
			}
			iter += oldVal.size();
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
