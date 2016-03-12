#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <omp.h>

#include "Rectangle.h"

using namespace std;

int main()
{
	srand(time(NULL));  // Set random seed

	cout<<"Hello!\n";
	//Point p(1,2);
	Rectangle rect1(1,2,3,4);
	cout<<"rect1"<<endl;
	rect1.Check();

	Rectangle rect2(rect1);
	cout<<"rect2"<<endl;
	rect2.Check();

	Rectangle rect3 = rect2;
	cout<<"rect2"<<endl;
	rect3.Check();

	return 0;

}
