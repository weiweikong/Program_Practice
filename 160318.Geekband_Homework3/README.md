## 题目

为下面的 Rectangle 和 Circle 类重写 getArea 虚函数。然后创建一个数组。
使用一个循环,生成 10 个 Rectangle、10 个 Circle,根据循环遍历顺序为它
们设置 no 编号,位置、长、宽、半径等其他信息取随机 1~10 之间的整数值,
然后将它们加入到创建好的数组中。最后,将这个长度为 20 的数组中所有面
积小于 50 的形状删除。将剩下的形状组成一个新的数组返回。
 
 
注意: 1. 补齐任务所需的其他函数。2. 考虑正确的内存管理。3. 使用原生数
组,不使用 vector 等容器。
```
class Shape
{
int no;
public:
virtual int getArea()=0;
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
Point leftUp;
};
class Circle: public Shape
{
Point center;
int radius;
};
```

## 思考

### 1. 数组类型

- abstract不能使用简单的数组
```
Shape* m_array = new Shape[count];
```
报错
```
error: cannot allocate an object of abstract type 'Shape'
```
- 使用array of pointer
```
Shape** m_array = new Shape*[count];
```
- 如果可以使用vector
http://stackoverflow.com/questions/13048301/pointer-to-array-of-base-class-populate-with-derived-class

### 2. 如何让no自动增减

- 设计`Shape()`构造函数和`static int count`完成自主的增减。
```
class Shape
{
    int no_;
    static int count;
public:
    Shape() {no_ = ++count;}
    virtual int getArea() const = 0;
    virtual ~Shape() {};
};
```

### 3. 拷贝成员

- 在这里设计了`copy`函数来完成满足面积约束的成员的拷贝。


## 编译

```
g++ homework3.cpp -o homework3 -std=c++11
```