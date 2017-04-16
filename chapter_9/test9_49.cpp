#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string word,upnumbers("bdfhklBDFHKL"),downnumbers("gjpqyGJPQY"), maxword("defualt");
	string::size_type pos = 0;
	ifstream in("test9_49_alphabet");
	while (in >> word)
	{
		while ( word.find_first_of(upnumbers, 0) == string::npos && \
			    word.find_first_of(downnumbers, 0) == string::npos )
		{
			if (word.size() > maxword.size())
				maxword = word;
			break;
		}
	}
	cout << "this maxword is : " << maxword << endl;
	return 0;
}
