#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
/*	stable_sort(words.begin(), words.end(), [] (const string &a, const string &b) { return a.size() < b.size(); } );
	auto wc = find_if(words.begin(), words.end(), [sz] (const string &a) { return a.size() >= sz; });
*/
	auto wc = stable_partition(words.begin(), words.end(), [sz] \
			  (const string &a) { return a.size() < sz ? \
			  true : false; } );
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s")
		 << " of length " << sz << " or longer" << endl;
	for_each(wc, words.end(), [] (const string &s) { cout << s << " ";});
	cout << endl;
}

int main()
{
	int val;
	string str;
	vector<string> vstr;
	cout << "please input: " << endl;
	while (cin >> str)
		vstr.push_back(str);
	cin.clear();
	cout << "please input val : " << endl;
	cin >> val;
	biggies(vstr, val);
	return 0;
}
