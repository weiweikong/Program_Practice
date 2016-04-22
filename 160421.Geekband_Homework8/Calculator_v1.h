#ifndef __WEIWEI_CALCULATOR_V1__
#define __WEIWEI_CALCULATOR_V1__

#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
struct CalculatorTraits { 
   typedef T ReturnType;
};

template<>
struct CalculatorTraits<int> {
   typedef int ReturnType;
   static constexpr ReturnType LIMIT = 100;
};

template<>
struct CalculatorTraits<long> {
   typedef long ReturnType;
   static constexpr ReturnType LIMIT = 1000;
};

template<>
struct CalculatorTraits<float> {
   typedef float ReturnType;
   static constexpr ReturnType LIMIT = 999.99;
};

template<>
struct CalculatorTraits<double> {
   typedef double ReturnType;
   static constexpr ReturnType LIMIT = 888.888888;
};

// For Precision
template <typename T>
struct GetPrecisionTraits {
   typedef T ReturnType;
 };

template<>
struct GetPrecisionTraits<float> {
   typedef int ReturnType;
   static constexpr ReturnType PRECISION = 5;
};

template<>
struct GetPrecisionTraits<double> {
   typedef int ReturnType;
   static constexpr ReturnType PRECISION = 10;
};


template <typename T>
class Calculator {
public:
   typename CalculatorTraits<T>::ReturnType GetLimit() 
   {
      return CalculatorTraits<T>::LIMIT;
   }
   typename GetPrecisionTraits<T>::ReturnType GetPrecision()
   {
      return GetPrecisionTraits<T>::PRECISION;
   }
};
#endif
