#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include <vector>

class Shape
{                   
   int no_;
public:
	static int count;
	Shape() {no_ = ++count;}
	Shape(const Shape& other)
	{
		no_ = other.no_;
		++count;
	}
	Shape& operator=(const Shape& other)
	{
		if (this == &other)
			return *this;
		
		no_ = other.no_;
		return *this;
	}
	~Shape() {--count;}
	int get_no() const {return this->no_;}
};              

class Point
{
   int x_;
   int y_;
public:
	Point (int x  = 0, int y =0)
	{
		this->x_ = x;
		this->y_ = y;
	}
	int get_x() const {return this->x_;}
	int get_y() const {return this->y_;}
};              

class Rectangle: public Shape
{
   int width_;
   int height_;
   Point* leftUp_;

public:
   Rectangle(): width_(0), height_(0), leftUp_(0){}
   Rectangle(int width, int height, int x, int y);
   Rectangle(const Rectangle& other);
   Rectangle& operator=(const Rectangle& other);
   ~Rectangle();

   int get_width() const {return width_;}
   int get_height() const {return height_;}
   void Info() const;
     
};

#endif
