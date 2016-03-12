#ifndef __DATECLASS__
#define __DATECLASS__

#include <vector>

class Date
{
public:
	Date(){year=2016;month=3;day=1;}
	Date(int y, int m, int d){year=y; month=m; day=d;}
	double get_year() const {return year;}
	double get_month() const {return month;}
	double get_day() const {return day;}
	double set_year(int y) {year = y;}
	double set_month(int m) {month = m;}
	double set_day(int d) {day = d;}

	friend bool operator> (const Date& left, const Date& right);
	friend bool operator< (const Date& left, const Date& right);
	friend bool operator== (const Date& left, const Date& right);
	friend void FriendSwap(Date& left, Date& right);

private:
    int year;
    int month;
    int day;
};



#endif