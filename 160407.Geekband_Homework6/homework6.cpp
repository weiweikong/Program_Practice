#include <vector>
#include <functional>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    vector<int> v1 { 0, 0, 30, 20, 0, 0, 0, 0, 10, 0 };
    vector<int> v2, v3;

    cout << "--------- Original Vector --------" << endl;
    for (int i:v1)
    {
    	cout << i << endl;
    }

    cout << "------------ Filter -------------" << endl;    
    int check_number = 0;
    cout << "not_equal_to = " << check_number << endl;

    cout << "--------- Result Vector ---------" << endl;
    partition_copy(v1.begin(), v1.end(), back_inserter(v2), back_inserter(v3), bind1st(not_equal_to<int>(), check_number));
    for (int i : v2) 
    {
    	cout << i << endl;
    }

    return 0;
}