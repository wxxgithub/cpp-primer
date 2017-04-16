#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int count = 0;
	string word;
	vector<string> vstr, vstr1;
	cout << "please input a number of int : " << endl;
	while (cin >> word)
		vstr.push_back(word);
	for (auto i : vstr)
		count += stoi(i);
	cout << count << endl;
	cin.clear();
	double count1 = 0.0;
	cout << "please input a number of double : " << endl;
	while (cin >> word)
		vstr1.push_back(word);
	for (auto i : vstr1)
		count1 += stoi(i);
	cout << count1;
	
	return 0;
}
