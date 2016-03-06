### Home 1

#### 题目

为Date类实现如下成员：
1. 构造器，可以初始化年、月、日。
2. 大于、小于、等于（> 、< 、==）操作符重载，进行日期比较。
3. print() 打印出类似 2015-10-1 这样的格式。
 
然后创建两个全局函数：
1. 第1个函数 CreatePoints生成10个随机的Date，并以数组形式返回；
2. 第2个函数 Sort 对第1个函数CreatePoints生成的结果，将其按照从小到大进行排序。
 
最后在main函数中调用CreatePoints，并调用print将结果打印出来。然后调用Sort函数对前面结果处理后，并再次调用print将结果打印出来。

#### 思路

##### 1. 基本运行框架

- 基本代码
```
#include <iostream>
using namespace std;
int main()
{
	cout<<"Hellow World!\n";
	return 0;
}
```
- 编译指令
```
g++ -o homework1 homework1.cpp
```

##### 2. 构造Date类

- 程序
```
#include <iostream>
using namespace std;

class Date
{
public:
	Date()
	{
		year=2016;
		month=3;
		day=1;
	}
	double get_year() const {return year;}
	double get_month() const {return month;}
	double get_day() const {return day;}

private:
    int year;
    int month;
    int day;
};

int main()
{

	Date mData;

	cout<<"Hellow!\n";
	cout<<mData.get_year()<<"\n";
	return 0;
}
```
- 主要考虑，类具有初始化能力同时类的参数应该是private


##### 3. 构造输出函数

```
#include <iostream>
using namespace std;

class Date
{
public:
	Date()
	{
		year=2016;
		month=3;
		day=1;
	}
	double get_year() const {return year;}
	double get_month() const {return month;}
	double get_day() const {return day;}

private:
    int year;
    int month;
    int day;
};

void print(const Date& d)
{
	cout<<d.get_year()<<"-"<<d.get_month()<<"-"<<d.get_day()<<"\n";
}

int main()
{
	Date mData;
	print(mData);
	return 0;
}
```
- print函数应当使用by refernce传递数据，同时应当避免数据被更改，因此使用`cons Reference Parameters`.
- 这种形式一般为`const typeName& variableName`，因此此处设计为`void print(const Date& d)`
- 函数的初始化
http://ticktick.blog.51cto.com/823160/194307/ 

##### 4. 重载运算符

- 这里考虑使用友元来重载运算符，因为需要比较符号左右两侧的数据，因此如果使用**类成员函数**来完成重载，需要用`this`指针，阅读起来不直观，同时`this`是指针，而另一个是`reference`，不便于程序的书写
```
class Date
{
public:
	Date(){year=2016;month=3;day=1;}
	Date(int y, int m, int d){year=y; month=m; day=d;}
	double get_year() const {return year;}
	double get_month() const {return month;}
	double get_day() const {return day;}
	
	friend bool operator> (const Date& left, const Date& right);
	friend bool operator< (const Date& left, const Date& right);
	friend bool operator== (const Date& left, const Date& right);

private:
    int year;
    int month;
    int day;
};
```
```
bool operator> (const Date& left, const Date& right)  // Compare Date
{
	if (left.year > right.year)
		return 1;
	if (left.year < right.year)
		return 0;

	if (left.month > right.month)
		return 1;
	if (left.month < right.month)
		return 0;

	if (left.day > right.day)
		return 1;
	else
		return 0;
}
```


- 操作符重载（友元方法和类函数方法）
http://www.cnblogs.com/BeyondAnyTime/archive/2012/09/01/2666570.html
- 为何比较操作符选择使用友元
http://www.informit.com/guides/content.aspx?g=cplusplus&seqNum=523
     - 比较时，如果是成员函数，则一个是pointer，一个是reference
 http://c.biancheng.net/cpp/biancheng/view/217.html


##### 5. 建立类的数组
- 使用普通class array
```
Date myDate[numDate];
```
- 使用动态数组建立
```
Date* pDate = new Date[numDate];
if (pDate == nullptr)
{
	cout<<"Intialize Date Array Failed!\n";
	return 0;
}
```
- 使用vector array
```
std::vector<Date> stdDateArray(numDate);
```

http://www.cppblog.com/sailing/articles/161659.html 相互关系



##### 6. Compile
```
g++ -o homework1 homework1.cpp -std=c++11 -lgomp
``