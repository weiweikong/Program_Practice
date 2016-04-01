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

	/*cout << "---------------------------" << endl;
	Fruit fruit;	
	cout << "Size of Class Fruit " << sizeof(Fruit) <<endl;	
	cout << "fruit address: "<<  &fruit << endl;
	int* vptrFruit = (int *)&fruit;
	cout << "vptrFruit:     " << vptrFruit <<endl;
	cout << "fruit.no:      " << &(fruit.no) << endl;	
	cout << "fruit.weight:  " << &(fruit.weight) << endl;
	cout << "fruit.key:     " << static_cast<void *>(&(fruit.key)) << endl;

	{
		cout << "---------------------------" << endl;
		cout << "1st Virtual Function Address: "<<endl;
	    typedef void(*Fun)(void);
	    Fun vfunc = (Fun)*( (int *)*(int*)(&fruit));
	    cout << (int *)*(int*)(&fruit) << endl;
	    cout << "Call it "<<endl;
	    vfunc();		                    
	   // vfunc = (Fun)*( (int *)(*(int*)(&fruit)+1));

	}
 	

	cout << "---------------------------" << endl;
	Apple apple; 
	cout << "Size of Class Apple " << sizeof(Apple) <<endl;
	cout << "apple address: "<< &apple << endl;
	int* vptrApple = (int *)&apple;
	cout << "vptrApple:     " << vptrApple <<endl;
	cout << "apple.no:      " << &(apple.no) << endl;
	cout << "apple.weight:  " << &(apple.weight) << endl;
	cout << "apple.key:     " << static_cast<void *>(&(apple.key)) << endl;
	cout << "apple.size:    " << &(apple.size) << endl;
	cout << "apple.type:    " << static_cast<void *>(&(apple.type)) << endl;

	{
		cout << "---------------------------" << endl;
		cout << "1st Virtual Function Address: "<<endl;
		typedef void(*Fun)(void);
	    Fun vfunc = (Fun)*( (int *)*(int*)(&apple));
   		cout << (int *)*(int*)(&apple) << endl;
   		cout << "Call it "<<endl;
   	 	vfunc();
	}*/

	return 0;

}

