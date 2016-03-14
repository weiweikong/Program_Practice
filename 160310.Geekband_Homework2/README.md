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
   Point * leftUp;
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
g++ Rectangle.cpp homework2.cpp -o homework2 -std=c++11 -lgomp
```