#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "Date.h"

using namespace std;

void print(const Date& d)  // Print Date in Standard Format
{
	cout<<d.get_year()<<"-"<<d.get_month()<<"-"<<d.get_day()<<"\n";
}

void CreatePoints(Date pDate[], int numDate)
{
	int rndYear;
	int rndMonth;
	int rndDay;
	
	for (int i = 0; i < numDate; i++)
	{		
		rndYear = rand() % (2020-1950+1)+1950;
		rndMonth = rand() % (12) + 1;
		if ((rndMonth==1) || (rndMonth==3) || (rndMonth==5) || (rndMonth==7) || (rndMonth==8) || (rndMonth==10) || (rndMonth==12))
			rndDay = rand() % (31) + 1;
		else if ((rndMonth==4) || (rndMonth==6) || (rndMonth==9) || (rndMonth==11))
			rndDay = rand() % (30) + 1;
		else if	(rndYear % 4 == 0)
			rndDay = rand() % (29) + 1;
		else
			rndDay = rand() % (28) + 1;
		pDate[i]=Date(rndYear, rndMonth, rndDay);
		//cout<<&pDate[i]<<"\n";  //Print Array Address
		print(pDate[i]);
	}
}

int main()
{
	srand(time(NULL));  // Set random seed
	Date mData;
	Date mData2(2016,3,3);
	cout<<"Hellow!\n";
	//cout<<mData.get_year()<<"\n";
	print(mData);
	print(mData2);

	//cout<<(mData > mData2)<<"\n";
	//cout<<(mData < mData2)<<"\n";
	//cout<<(mData == mData2)<<"\n";

	int numDate = 10;
	Date myDate[numDate];
	CreatePoints(myDate, numDate);

	return 0;
}
