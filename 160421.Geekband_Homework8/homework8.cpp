#include <iostream>
#include "Calculator.h"
#include <limits>
#include <iomanip> 

using namespace std;

int main(int argc, char** argv) 
{
	int precision = std::numeric_limits<double>::max_digits10;

  	cout << "---------- Max from System -----------" << endl;
	cout << "max int: " << numeric_limits<int>::max() << endl;
	cout << "max long: " << numeric_limits<long>::max() << endl;
	cout << "max float: " << numeric_limits<float>::max() << endl;
	cout << "max double: " << numeric_limits<double>::max() << endl;
	

	cout << "---------- Max from Calculator -----------" << endl;

	Calculator<int>* cal_int = new Calculator<int>;	
	cout << "max int: " << cal_int->GetLimit() << endl;

	Calculator<long>* cal_long = new Calculator<long>;
	cout << "max long: " << cal_long->GetLimit() << endl;

	Calculator<float>* cal_float = new Calculator<float>;
	cout << "max float: " << setprecision(cal_float->precision()) << cal_float->GetLimit() << endl;

    Calculator<double>* cal_double = new Calculator<double>;
	cout << "max double: " << setprecision(cal_double->precision()) << cal_double->GetLimit() << endl;

	Calculator<char>* cal_char = new Calculator<char>;
	cout << "char specialized: " << boolalpha << cal_char->is_specialized << endl;

    return 0;
}