#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdint>
#include <stdint.h>
//#include <omp.h>

#include "Fruit.h"

using namespace std;


int main()
{
	
	cout << "Size of System Standard Type" << endl;
	cout << "sizeof(int)      " << sizeof(int) << endl;
	cout << "sizeof(int*)     " << sizeof(int*) << endl;
	cout << "sizeof(double)   " << sizeof(double) << endl;
	cout << "sizeof(double*)  " << sizeof(double*) << endl;
	cout << "sizeof(char)     " << sizeof(char) << endl;
	cout << "sizeof(char*)    " << sizeof(char*) << endl;
	{
		cout << "-------- In Stack --------------" << endl;	
		cout << "Generate Fruit" << endl;
		Fruit fruit;

	}
	{
		cout << "-------- In Stack ------------" << endl;
		cout << "Generate Apple" << endl;
		Apple apple;
	}

	{
		cout << "-------- In Heap --------------" << endl;
		cout << "Generate Fruit using new" << endl;
		cout << "sizeof(Fruit) = " <<  sizeof(Fruit) << endl;
		Fruit* pFruit = new Fruit;
		delete pFruit;
	}

	{
		cout << "---------- In Heap -------------" << endl;
		cout << "Generate Apple using new" << endl;
		cout << "sizeof(Apple) = " <<  sizeof(Apple) << endl;
		Apple* pApple = new Apple;
		delete pApple;
	}

	{
		cout << "----------- In Heap ----------------" << endl;
		cout << "Generate Apple using new[]" << endl;
		Apple* pArrayApple = new Apple[5];
		delete [] pArrayApple;
	}
	return 0;

}

