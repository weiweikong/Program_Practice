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

   Fruit(): no(0), weight(0), key('a')
   {cout << "\tCall Fruit() with default value. ctor.this =" << this <<  endl; }
   virtual  ~Fruit() {cout << "\tCall ~Fruit(). dtor.this =" << this  << endl;}  
};

class Apple: public Fruit{
public:
   int size;
   char type;

   Apple(): size(0), type('b')
   {cout << "\tCall Apple() with default value. ctor.this = " << this  << endl;}
   virtual ~Apple() {cout << "\tCall ~Apple(). dtor.this =" << this  << endl;}

   void* operator new (size_t size);
   void* operator new[] (size_t size);
   void operator delete (void* ptr, size_t size);
   void operator delete[] (void* ptr, size_t size);

};

inline
void* Apple::operator new(size_t size)
{
   if (Apple* p = (Apple*)malloc(size))   
   {
      cout << "Call Apple::operator new(). Size = " << size  << " ptr = " << p <<  endl;      
      return p;
   }
   else
      throw bad_alloc();   
}

inline
void* Apple::operator new[](size_t size)
{
   if (Apple* p = (Apple*)malloc(size))
   {
      cout << "Call Apple::operator new[]. Size = " << size << " ptr = " << p << endl;   
      return p;
   }
   else  
      throw bad_alloc();   
}

inline
void Apple::operator delete(void* ptr, size_t size)
{
   cout << "Call Apple::operator delete. Size = " << size  << " ptr = " << ptr << endl;
   free(ptr);
}

inline
void Apple::operator delete[](void* ptr, size_t size)
{
   cout << "Call Apple::operator delete[]. Size = " << size  << " ptr = " << ptr << endl;  
   free(ptr);
}

#endif
