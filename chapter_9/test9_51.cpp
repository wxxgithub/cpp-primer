#include <iostream>
#include <string>

using namespace std;

class date
{
public:
	date() = default;
	date(string&);
	std::ostream &print(std::ostream&, date&);

	unsigned long year;
	unsigned long month;
	unsigned long day;

};

date::date(string &str)
{
	auto pos = str.find_first_not_of(", /");
	auto pos1 = str.find_first_of(", /"); 
	auto monthtmp = str.substr(pos,pos1 - pos);
	if (monthtmp == "January" || monthtmp == "Jan")
		month = 1;
	else
		month = stoul(monthtmp);
	pos = str.find_first_of("0123456789", pos1);
	pos1 = str.find_first_of(", /", pos); 
	day = stoul(str.substr(pos, pos1 - pos));
	pos = str.find_first_of("0123456789", pos1);
	year = stoul(str.substr(pos));
}


std::ostream &date::print(std::ostream& os, date& dates)
{
	os << dates.year << " " << dates.month << " " << dates.day << endl;
	return os;
}

int main()
{
	string str("Jan 1 1990");
	date date1(str);
	date1.print(cout, date1);
	string str1("January 1,1995");
	date date2(str1);
	date2.print(cout, date2);
	string str2("2/25/1997");
	date date3(str2);
	date3.print(cout, date3);
	return 0;
}
