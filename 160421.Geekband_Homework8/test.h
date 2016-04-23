
template<typename T> 
class AccumulationTraits; 
template<> 
class AccumulationTraits<char> { 
  public: 
    typedef int AccT; 
    static AccT zero() { 
        return 0; 
    } 
}; 
template<> 
class AccumulationTraits<short> { 
  public: 
    typedef int AccT; 
    static AccT zero() { 
        return 0; 
    } 
}; 
template<> 
class AccumulationTraits<int> { 
  public: 
    typedef long AccT; 
    static AccT zero() { 
        return 0; 
    } 
}; 
template<> 
class AccumulationTraits<unsigned int> { 
  public: 
    typedef unsigned long AccT; 
    static AccT zero() { 
        return 0; 
    } 
}; 
template<> 
class AccumulationTraits<float> { 
  public: 
    typedef double AccT; 
    static AccT zero() { 
        return 0; 
    } 
}; 

template <typename T> 
inline 
typename AccumulationTraits<T>::AccT accum (T const* beg, 
                                            T const* end) 
{ 
    // return type is traits of the element type 
    typedef typename AccumulationTraits<T>::AccT AccT; 
    AccT total = AccumulationTraits<T>::zero();     
    while (beg != end) { 
        total += *beg; 
        ++beg; 
    } 
    return total; 
}

