#include <iostream>
#include <iterator>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	int x;
	if (argc != 4)
	{
		cout << "input erro!" << endl;
		exit(0);
	}
	ifstream in(argv[1]);
	ofstream out1(argv[2]), out2(argv[3]);
	if (!in)
	{
		cout << "inputfile can't open" << endl;
		exit(0);
	}
	istream_iterator<int> item_iter(in), eof;
	ostream_iterator<int> out1_iter(out1, " "), out2_iter(out2, "\n");
	while (item_iter != eof)
	{
		if (*item_iter % 2)
			out1_iter = *item_iter++;
		else
			out2_iter = *item_iter++;
	}

	return 0;
}
