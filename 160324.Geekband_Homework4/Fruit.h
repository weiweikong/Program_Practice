#ifndef __FRUIT_H__
#define __FRUIT_H__

#include <vector>
#include <iostream>
#include <iomanip>

extern const double PI;
using namespace std;

class Fruit{
public:

   int no;
   double weight;
   char key;
   void print() { cout << "Fruit::print()" << endl; }
   virtual void process(){ cout << "Fruit::process()" << endl;  }
   virtual void process2(){ cout << "Fruit::process2()" << endl;  }
};
   
class Apple: public Fruit{
public:
   int size;
   char type;

   void save() { cout << "Apple::save()" << endl; }
   virtual void process(){ cout << "Apple::process()" << endl;  }
};


#endif
