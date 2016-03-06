#include <iostream>
#include <time.h>
#include <stdlib.h>


#include "Date.h"

using namespace std;

void PrintDateArray(Date* pDate, int numDate)  // Print Date in Standard Format
{
	for (int i = 0; i < numDate; ++i)
	{
		cout<<i<<": "<<pDate[i].get_year()<<"-"<<pDate[i].get_month()<<"-"<<pDate[i].get_day()<<"\n";
	}
}

void CreatePoints(Date* pDate, int numDate)
{
	int rndYear;
	int rndMonth;
	int rndDay;
	
	for (int i = 0; i < numDate; i++)
	{		
		rndYear = rand() % (2020-1950+1)+1950;  // Set random year [1950,2020]
		rndMonth = rand() % (12) + 1; // Set random month [1,12]

		// Set random day depond on month and year
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
		//print(pDate[i]);
	}
}

/*void SwapDate(Date* pDate, int left, int right)
{
	int tmp;
	tmp = pDate[left].get_year();
	pDate[left].set_year(pDate[right].get_year());
	pDate[right].set_year(tmp);

	tmp = pDate[left].get_month();
	pDate[left].set_month(pDate[right].get_month());
	pDate[right].set_month(tmp);

	tmp = pDate[left].get_day();
	pDate[left].set_day(pDate[right].get_day());
	pDate[right].set_day(tmp);

}*/

void Sort(Date* pDate, int numDate)
{
	int i,j;
	int flag = 1;
	for (i = 0; (i < numDate) && flag; ++i)
	{
		flag = 0;
		for (j = 0; j < numDate-1; ++j)
		{
			if (pDate[j+1] < pDate[j])
			{
				FriendSwap(pDate[j], pDate[j+1]);
				//SwapDate(pDate, j, j+1);
				flag = 1;
				//cout<<pDate[j].get_year()<<"\n";
				//cout<<pDate[j+1].get_year()<<"\n";
			}
			/*if (pDate[j+1].get_year() < pDate[j].get_year())
			{
				//SwapDate(pDate, j, j+1);
				FriendSwap(pDate[j], pDate[j+1]);
				flag = 1;
			}
			else if (pDate[j+1].get_year() == pDate[j].get_year())
			{
				if (pDate[j+1].get_month() < pDate[j].get_month())
				{
					//SwapDate(pDate, j, j+1);
					FriendSwap(pDate[j], pDate[j+1]);
					flag = 1;
				}
				else if (pDate[j+1].get_month() == pDate[j].get_month())
				{
					if (pDate[j+1].get_day() < pDate[j].get_day())
					{
						//SwapDate(pDate, j, j+1);
						FriendSwap(pDate[j], pDate[j+1]);
						flag = 1;
					}
				}
			}*/
		}		
	}
}

void CreatePointsSTD(vector<Date> &VectorDate)
{
	int rndYear;
	int rndMonth;
	int rndDay;	
	
	for (int i = 0; i < VectorDate.size(); ++i)
	{		
		rndYear = rand() % (2020-1950+1)+1950;  // Set random year [1950,2020]
		rndMonth = rand() % (12) + 1; // Set random month [1,12]

		// Set random day depond on month and year
		if ((rndMonth==1) || (rndMonth==3) || (rndMonth==5) || (rndMonth==7) || (rndMonth==8) || (rndMonth==10) || (rndMonth==12))
			rndDay = rand() % (31) + 1;
		else if ((rndMonth==4) || (rndMonth==6) || (rndMonth==9) || (rndMonth==11))
			rndDay = rand() % (30) + 1;
		else if	(rndYear % 4 == 0)
			rndDay = rand() % (29) + 1;
		else
			rndDay = rand() % (28) + 1;

		VectorDate[i]=(Date(rndYear, rndMonth, rndDay));
		//pDate[i]=Date(rndYear, rndMonth, rndDay);
		//cout<<&pDate[i]<<"\n";  //Print Array Address
		//print(pDate[i]);
	}
}
void PrintDateSTD(std::vector<Date> &VectorDate)
{
	for (int i = 0; i < VectorDate.size(); ++i)
	{
		cout<<i<<": "<<VectorDate[i].get_year()<<"-"<<VectorDate[i].get_month()<<"-"<<VectorDate[i].get_day()<<"\n";
	}
}

int main()
{
	srand(time(NULL));  // Set random seed
	//Date mData;
	//Date mData2(2016,3,3);
	//cout<<"Hellow!\n";
	//cout<<mData.get_year()<<"\n";
	//print(mData);
	//print(mData2);

	//cout<<(mData > mData2)<<"\n";
	//cout<<(mData < mData2)<<"\n";
	//cout<<(mData == mData2)<<"\n";


	int numDate = 10;

	// ------------For Static Arrays ---------
	cout <<"==================\n";
	cout <<"Using Static Array\n";
	cout <<"==================\n";	
	Date myDate[numDate];	
	CreatePoints(myDate, numDate);
	cout<<"Original Date Array\n";
	PrintDateArray(myDate, numDate);
	cout <<"------------\n";
	cout<<"After Sorting\n";
	Sort(myDate, numDate);
	PrintDateArray(myDate, numDate);

	// ----------- For Dynamic Arrays ---------
	cout <<"===================\n";
	cout <<"Using Dynamic Array\n";
	cout <<"===================\n";

	Date* pDate = new Date[numDate];
	if (pDate == nullptr)
	{
		cout<<"Intialize Date Array Failed!\n";
		return 0;
	}
	CreatePoints(pDate, numDate);
	cout<<"Original Date Array\n";
	PrintDateArray(pDate, numDate);
	Sort(pDate, numDate);
	cout <<"------------\n";
	cout<<"After Sorting\n";
	PrintDateArray(pDate, numDate);
	delete[] pDate;

	// For std::vector Arrays
	cout <<"===================\n";
	cout <<"Using STD Vector\n";
	cout <<"===================\n";
	std::vector<Date> stdDateArray(numDate);
	CreatePointsSTD(stdDateArray);
	PrintDateSTD(stdDateArray);

	return 0;
}
