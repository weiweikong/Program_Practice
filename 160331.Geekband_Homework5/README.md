## 1. 题目

```
class Fruit{test
   int no;
   double weight;
   char key;
public:
   void print() {   }
   virtual void process(){   }
};
 
class Apple: public Fruit{
   int size;
   char type;
public:
   void save() {   }
   virtual void process(){   }
};
```
为上述类型 Fruit和Apple 添加 构造函数与 析构函数， 并在构造函数与析构函数中打印控制台信息，观察构造和析枸调用过程。然后为Apple类重载::operator new和 ::operator delete，在控制台打印信息，并观察调用结果。

## 2. 思考

### 2.1 构建`operator new`和`operator new[]`的基本要求

- 返回值是`void *`
- 第一个参数是`size_t`类型
- 需要判断分配是否成功
```
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
```
```
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
```
### 2.2 书写`operator delete` 和 `operator delete[]` 要求

- 返回值必须是`void`
- 第一个参数必须是`void*`
```
inline
void Apple::operator delete(void* ptr, size_t size)
{
   cout << "Call Apple::operator delete. Size = " << size  << " ptr = " << ptr << endl;
}
```

```
inline
void Apple::operator delete[](void* ptr, size_t size)
{
   cout << "Call Apple::operator delete[]. Size = " << size  << " ptr = " << ptr << endl;  
}
```
### 2.3 C++ Primer - P823





## 编译
```
g++ homework5.cpp -o homework5 -std=c++11
```