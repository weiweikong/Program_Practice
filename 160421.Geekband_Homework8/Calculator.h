#ifndef __WEIWEI_CALCULATOR__
#define __WEIWEI_CALCULATOR__

#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
class Calculator
{
public:
      static const bool is_specialized = false;
};

template <>
class Calculator<int>
{
public:
   static const bool is_specialized = true;
   static int GetLimit()
   {
      return 100;
   }
};

template <>
class Calculator<long>
{
public:
   static const bool is_specialized = true;
   static long GetLimit()
   {
      return 1000L;
   }
};


template <>
class Calculator<float>
{
public:
   static const bool is_specialized = true;
   static float GetLimit()
   {
      return 999.99F;
   }
   static int precision()
   {
      return 5;      ;
   }
};


template <>
class Calculator<double>
{
public:
   static const bool is_specialized = true;
   static double GetLimit()
   {
      return 888.8888888;
   }
   static int precision()
   {
      return 10;
   }
};


#endif
