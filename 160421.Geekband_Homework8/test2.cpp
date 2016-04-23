#include "test2.h" 
#include <iostream> 
int main() 
{ 
	// create array of 5 integer values 
	Accum<int> intAccum;
	int num[]={1,2,3,4,5}; 
	// print average value 
	std::cout << "the average value of the integer values is " 
	          << intAccum.accum(&num[0], &num[5]) / 5 
	          << '\n'; 

	// create array of character values 
	Accum<char> charAccum;
	char name[] = "templates"; 
	int length = sizeof(name)-1; 
	// (try to) print average character value 
	std::cout << "the average value of the characters in \"" 
	          << name << "\" is " 
	          << charAccum.accum(&name[0], &name[length]) / length 
	          << '\n'; 	
} 
