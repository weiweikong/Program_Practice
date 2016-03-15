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
	{
		this->leftUp_ = new Point(*(other.leftUp_));  // Point copy constructor; other.leftUp_ is a (Point* ); so *(other.leftUp_) is a Point.
		// this->leftUp_ = new Point((other.leftUp_)->get_x(),(other.leftUp_)->get_y()); Not good, copy constructor is better
	
		//cout<<"Debug other.leftUp_"<<endl;
		//cout<<(ohter.leftUp_)<<endl;
		//cout<<(other.leftUp_)->get_x()<<endl;
		//cout<<(other.leftUp_)->get_y()<<endl;
		// cout<<*(other.leftUp_)<<endl; Wrong
	}
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
	Shape::operator=(other);
	this->width_ = other.width_;
	this->height_ = other.height_;

	if( other.leftUp_ != nullptr )
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


void Rectangle::Info() const
{
	cout<<"No."<<this->get_no()<<endl;
	cout<<"The Size is:"<<this->get_width()<<" "<<this->get_height()<<endl;
	cout<<"The Position is: ("<<(this->leftUp_->get_x())<<", "<<(this->leftUp_->get_y())<<")"<<endl;
}