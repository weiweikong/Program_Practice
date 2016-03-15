### Homewrk 2
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
### 设计思路

#### 01. Big Three Function Design - 三大函数设计

##### 1.1 General Constructor - 构造函数

- `private` could be omit at the begging of a class.

```
class MyClass
{
    // for private variables
public:
    // for public interface
protected:
    // for protected functions
}
```

- We would prefer to use `this`
```
Rectangle(int width, int height)
{
    this->width = width;
    this->height = height;  
}
```

- There is a `point-to-class` pointer and how to build a constructor
```
// Class
class Point
{
   int x;
   int y;
public:
    Point (int x  = 0, int y =0)
    {
        this->x = x;
        this->y = y;
    }
    int get_x() const {return x;}
    int get_y() const {return y;}
};             
 
class Rectangle: public Shape
{
   int width;
   int height;
   Point* leftUp;
 
public:
   Rectangle(int width, int height, int x, int y);
    ... 
};

// Constructor
Rectangle::Rectangle(int width, int height, int x, int y)
{
     this->width = width;
     this->height = height;
     this->leftUp = new Point(x, y);
}
```
##### 1.2 Copy Constructor

- Step 1: 父类Shape的创建在函数列表中完成，不能使用`this->no`进行处理。
- Step 2: 子类的**non-pointer**成员，也可以在函数列表中完成
- Step 3: 子类的**pointer**成员，必须先检查是否为`nullptr`，在依次进行赋值，即**深拷贝**。
```
Rectangle::Rectangle(const Rectangle& other):
    Shape(other),  // Step 1: father class member
    width_(other.width_),  // Step 2: non-pointer member
    height_(other.height_)
{
 
    if (other.leftUp_ != nullptr)  // Step 3: Check whether other is nullptr
    {
        this->leftUp_ = new Point(*(other.leftUp_));  // Point copy constructor; other.leftUp_ is a (Point* ); so *(other.leftUp_) is a Point.     
    }
    else
        this->leftUp_= nullptr;
}
```
- 【思考】此处最对`*(other.leftUp_)*`不是很理解，后续请教他人后更深入的理解：`*`就是`dereference`
    - `other.leftUp_` is a `Point *`
    - `*(other.leftUp_)` is a `Point`
    - `new Point(?)`的`?`是可以接收`const Pointer&`的内容
    - 相比于`int`等价于
    ```
    int number = 1;
    int *number_ptr  = &number;
    int dereferenced = *number_ptr;
    ```


##### 1.3 Copy Assignment

- Step 1：先检查是否是`self-assignment`
- Step 2：**父类**程序按的处理。（这里经过查询书籍，可以知道，直接使用系统默认的copy assignment函数即可完成任务）
- Step 3：子类**non-pointer**成员直接赋值
- Step 4：检查**pointer**等号左右两侧是否为nullptr，并分别处理
```
Rectangle& Rectangle::operator=(const Rectangle& other)
{
    if (this == &other) // Step 1:  Self Assignment Check
    {
        return *this;
    }   
    Shape::operator=(other);    // Step 2: Default copy assignment
    this->width_ = other.width_;  // Step 3: General member variables copy
    this->height_ = other.height_;
 
    if( other.leftUp_ != nullptr )   // Step 4: Check pointer member
    {
       if( this->leftUp_ != nullptr )
       {
          *(this->leftUp_) = *(other.leftUp_);
       }
       else
       {
          this->leftUp_ = new Point(*other.leftUp_);
       }
    }
    else
    {
       delete this->leftUp_;
       this->leftUp_ = nullptr;
    }
 
    return *this;
}
```
##### 1.4 Destructor

- General idea is to delete the pointer directly.
```
Rectangle::~Rectangle()
{
   delete leftUp;
}
```
- More safe solution
```
Rectangle::~Rectangle()
{
   delete leftUp;  // Just release the memory space, but not the value is still an address
   leftUp = nullptr;
}
```
##### 1.5 `inline` function 

- The body of an `inline` fucntion should be in the `.h` file, otherwise you will get
```
undefined reference to
```
- 参考
http://stackoverflow.com/questions/4769479/c-inlining-class-methods-causes-undefined-reference
https://isocpp.org/wiki/faq/inline-functions#inline-member-fns


### 总结
- 首先理清类之间的相互关系，一边后续设计三大函数时，明白各个类成员的来历。
- 严格按照既定的设计思路书写，不能随心所欲，以免漏写或画蛇添足。
- 处理指针问题要格外小心。


### Reference
- https://github.com/GeekBand/GeekBand-CPP-1501-Homework/blob/master/G2015010269%2FMakefile
- http://www.cnblogs.com/gaobaoru-articles/p/5236282.html
- http://www.jianshu.com/p/629c743b0fd3





### Compile
```
g++ Rectangle.cpp homework2.cpp -o homework2 -std=c++11 -lgomp
```

### Notes
- http://www.jianshu.com/p/2fcaa850521f
- Anoterh link: http://www.cnblogs.com/kongww/p/5278140.html

