#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <omp.h>

#include "Rectangle.h"

using namespace std;
int Shape::count = 0;

int main()
{
	srand(time(NULL));  // Set random seed

	cout<<"Hello!\n";
	//Point p(1,2);
	Rectangle rect1(1,2,3,4);
	cout<<"rect1"<<endl;
	rect1.Info();
	cout<<"-----------------"<<endl;

	Rectangle rect2(rect1);
	cout<<"rect22"<<endl;
	rect2.Info();
	cout<<"-----------------"<<endl;

	Rectangle rect3 = rect2;
	cout<<"rect3"<<endl;
	rect3.Info();
	cout<<"-----------------"<<endl;

	cout<<"Current Number is "<<Shape::count<<"."<<endl;
	return 0;

}
