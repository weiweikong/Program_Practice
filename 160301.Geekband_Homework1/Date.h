#ifndef __DATECLASS__
#define __DATECLASS__

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

private:
    int year;
    int month;
    int day;
};

bool operator== (const Date& left, const Date& right)  // Compare Date
{
	if (left.year == right.year)
		if (left.month == right.month)
			if (left.day == right.day)
				return 1;
			else
				return 0;
		else
			return 0;
	else
		return 0;
}

bool operator< (const Date& left, const Date& right)  // Compare Date
{
	if (left.year < right.year)
		return 1;
	if (left.year < right.year)
		return 0;

	if (left.month < right.month)
		return 1;
	if (left.month < right.month)
		return 0;

	if (left.day < right.day)
		return 1;
	else
		return 0;
}

bool operator> (const Date& left, const Date& right)  // Compare Date
{
	if (left.year > right.year)
		return 1;
	if (left.year < right.year)
		return 0;

	if (left.month > right.month)
		return 1;
	if (left.month < right.month)
		return 0;

	if (left.day > right.day)
		return 1;
	else
		return 0;
}

#endif