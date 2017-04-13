#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

class Sales_data {

friend std::istream &read( std::istream &, Sales_data &);
friend std::ostream &print( std::ostream &, const Sales_data &);
public:
	Sales_data() = default;
	Sales_data(const std::string &s) : bookNo(s) { }
	Sales_data(const std::string &s, unsigned n, double p) :
			   bookNo(s), units_sold(n), revenue(p*n) { }
	Sales_data(std::istream &is) { read(is, *this); } 
	std::string isbn() const	{ return bookNo; }
	Sales_data& combine(const Sales_data &);
	double avg_price() const;

private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0 ;
};

    std::istream &read( std::istream &, Sales_data &);
    std::ostream &print( std::ostream &os, const Sales_data &item);

    Sales_data& Sales_data::combine(const Sales_data &rhs)
	{
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}

	std::istream &read( std::istream &is, Sales_data &item)
    {
		double price = 0;
		is >> item.bookNo >> item.units_sold >> price;
		item.revenue = price * item.units_sold;
		return is;
	}
    
	std::ostream &print( std::ostream &os, const Sales_data &item)
	{	
		os << item.bookNo << " " << item.units_sold << " "
		   << item.revenue << std::endl;
		return os;
	}

	inline double Sales_data::avg_price() const
	{
		if (units_sold)
			return revenue/units_sold;
		else
			return 0;
	}	

#endif
