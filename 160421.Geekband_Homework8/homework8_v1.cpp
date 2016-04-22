#include <iostream>
#include "Calculator_v1.h"
#include <limits>
#include <iomanip> 

using namespace std;

int main(int argc, char** argv) 
{
	cout << "---------- Max from System -----------" << endl;
	cout << "max int: " << numeric_limits<int>::max() << endl;
	cout << "max long: " << numeric_limits<long>::max() << endl;
	cout << "max float: " << numeric_limits<float>::max() << endl;
	cout << "max double: " << numeric_limits<double>::max() << endl;
	

	cout << "---------- Max from Calculator -----------" << endl;


	Calculator<int> cal_int	;	
	cout << "max int: " << cal_int.GetLimit() << endl;

	Calculator<long> cal_long;
	cout << "max long: " << cal_long.GetLimit() << endl;

	Calculator<float> cal_float;
	cout << "max float: " << setprecision(cal_float.GetPrecision()) << cal_float.GetLimit() << endl;

    Calculator<double> cal_double;
	cout << "max double: " << setprecision(cal_double.GetPrecision()) << cal_double.GetLimit() << endl;

	//Calculator<char>* cal_char = new Calculator<char>;
	//cout << "char specialized: " << boolalpha << cal_char->is_specialized << endl;
	

    return 0;
}