### Home 2

#### 题目

为 Rectangle 类实现构造函数,拷贝构造函数,赋值操作符,析构函数。
```
class Shape
{                   
   int no;
};              
class Point
{
   int x;
   int y;
};              
class Rectangle: public Shape
{
   int width;
   int height;
   Point * leftDateUp;
public:
   Rectangle(int width, int height, int x, int y);
   Rectangle(const Rectangle& other);
   Rectangle& operator=(const Rectangle& other);
   ~Rectangle();         
};
```

#### 思路

##### 1. 基本运行框架

##### 6. Compile
```
g++ -o homework1 homework1.cpp -std=c++11 -lgomp
```