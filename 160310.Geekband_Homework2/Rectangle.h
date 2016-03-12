#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include <vector>

class Shape
{                   
   int no;
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
	int get_x() const {return x_;}
	int get_y() const {return y_;}
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
   void Check() const;
     
};

#endif
