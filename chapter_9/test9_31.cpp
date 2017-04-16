#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
	auto pre = flst.before_begin();
	auto iter = flst.begin();
	while (iter != flst.end())
	{
		if (*iter % 2)
		{	
			
			iter = flst.insert_after(pre, *iter);
			++iter;pre = iter;
			++iter;
		}
		else
			iter = flst.erase_after(pre);
	}
	for (auto i : flst)
		cout << i << " ";
	cout << endl;
}
