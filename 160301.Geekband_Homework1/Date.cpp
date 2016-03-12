#include "Date.h"

void FriendSwap(Date& left, Date& right)
{
	using std::swap;
	swap(left.year, right.year);
	swap(left.month, right.month);
	swap(left.day, right.day);
}

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
	if (left.year > right.year)
		return 0;

	if (left.month < right.month)
		return 1;
	if (left.month > right.month)
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