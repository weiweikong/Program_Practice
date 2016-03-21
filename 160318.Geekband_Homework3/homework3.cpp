#include <iostream>
#include <time.h>
#include <stdlib.h>
//#include <omp.h>

#include "Rectangle.h"

using namespace std;

const double PI = 3.1415926;
int Shape::count = 0;

Shape** createArray(int count)
{
	Shape** m_array = new Shape*[count];
	for (int i = 0; i < count; ++i)
	{
		if (i < count/2)  
		{
			m_array[i] = new Rectangle(rand()%10 + 1, rand()%10 + 1, rand()%10 + 1, rand()%10 + 1);		
		}
		else
		{
			m_array[i] = new Circle(rand()%10 + 1, rand()%10 + 1, rand()%10 + 1);
		}

	}
	return m_array;
}

void delArray(Shape* m_array[], int count)
{
	for (int i = 0; i < count; ++i)
	{
		delete m_array[i];
	}
	delete[] m_array;   //free space
	m_array = nullptr;  //set nulptr
}

void printArray(Shape* m_array[], int count)
{
	for (int i = 0; i < count; ++i)
	{
		m_array[i]->info();
	}
}

Shape** filterArray(Shape* m_array[], int count, int& fcount)
{
	Shape** f_array = new Shape*[count];	
	for (int i = 0; i < count; ++i)
	{
		if (m_array[i]->getArea() >= 50)
		{
			f_array[fcount] = m_array[i]->copy();
			//cout<<"i = "<<i<<" fcount="<<fcount<<endl;
			fcount++;
		}
	}
	return f_array;
}


int main()
{
	srand((unsigned)time(0));	
	
	int count = 20;
	int fcount;
	Shape** array = createArray(count);
	printArray(array, count);
	cout<<" ------------After Filtering ------------"<<endl;
	fcount = 0;
	Shape** farray = filterArray(array, count, fcount);
 	printArray(farray, fcount);
 	delArray(array, count);	 	
	delArray(farray, fcount);

	
	return 0;

}

