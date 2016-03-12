#include <iostream>
#include "Rectangle.h"

using namespace std;


Rectangle::Rectangle(int width, int height, int x, int y)
{
     this->width_ = width;
     this->height_ = height;
     this->leftUp_ = new Point(x, y);
}

Rectangle::~Rectangle()
{
    delete leftUp_;
    leftUp_ = nullptr;
}


Rectangle::Rectangle(const Rectangle& other):
	Shape(other), 
	width_(other.width_), 
	height_(other.height_)
{

	if (other.leftUp_ != nullptr)  // Check whether other is nullptr
		this->leftUp_ = new Point(*other.leftUp_);  // Why?
	else
		this->leftUp_= nullptr;
}

Rectangle& Rectangle::operator=(const Rectangle& other)
{
	// Self Assignment Check
	if (this == &other)
	{
		return *this;
	}
	this->width_ = other.width_;
	this->height_ = other.height_;

	if( other.leftUp_ != NULL )
   {
      if( this->leftUp_ != NULL )
      {
         (*leftUp_) = *(other.leftUp_);
      }
      else
      {
         leftUp_ = new Point(*other.leftUp_);
      }
   }
   else
   {
      delete this->leftUp_;
      this->leftUp_ = NULL;
   }

	return *this;
}


void Rectangle::Check() const
{
	cout<<this->get_width()<<" "<<this->get_height()<<endl;
}