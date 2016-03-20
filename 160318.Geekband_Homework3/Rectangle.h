#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include <vector>
#include <iostream>
#include <iomanip>

extern const double PI;
using namespace std;

class Shape
{
    int no_;
    static int count;
public:
	Shape() {no_ = ++count;}
	int getNo() const {return no_;}
	Shape& operator=(const Shape& other)
	{
		if (this == &other)
			return *this;
		
		no_ = other.no_;
		return *this;
	}
    virtual int getArea() const = 0;
    virtual void info() const = 0;    
    virtual ~Shape() {--count;}
};

class Point
{
    int x_;
    int y_;
public:
	int getX() const {return x_;}
	int getY() const {return y_;}
	Point(int x = 0, int y = 0): x_(x), y_(y) {}
};

class Rectangle: public Shape
{
    int width_;
    int height_;
    Point leftUp_;
public:
	Rectangle(int w = 0, int h = 0, int x = 0, int y = 0):
		width_(w), height_(h), leftUp_(Point(x,y)) { }
	Rectangle& operator=(const Rectangle& other);
	virtual int getArea() const {return width_*height_;} // Rectangle Circle Area
	virtual void info() const
	{
		cout<<"Rectangle No. "<<setw(2)<<setfill('0')<<this->getNo()<<" Position ("<<this->leftUp_.getX()<<", "<<this->leftUp_.getY()<<")"<<" Area :"<<this->getArea()<<endl;
	}
	virtual ~Rectangle() {};
};

class Circle: public Shape
{
    Point center_;
    int radius_;
public:
	Circle(int x = 0, int y = 0, int r = 0):
		center_(Point(x,y)), radius_(r) { }
	Circle& operator=(const Rectangle& other);
	virtual int getArea() const {return PI*radius_*radius_;}   // Calculate Circle Area
	virtual void info() const
	{
		cout<<"Circle No. "<<this->getNo()<<" Position ("<<this->center_.getX()<<", "<<this->center_.getY()<<")"<<" Area:"<<this->getArea()<<endl;
	}
	virtual ~Circle() {};

};

#endif
