#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person
{
public:
	Person() = default;
	Person( const string &name, const string &address) : Name(name), Address(address) { }
	Person( std::istream &is) { is >> *this; }
	string getName() const { return Name; }
	string getAddress() const { return Address; }

private:
	string Name;
	string Address;

};

#endif
