/***************************
 ** Author: Du Tram
 ** Date: 11/9/2016
 **Description:Square header file.
****************************/
#include"Rectangle.hpp"
#ifndef SQUARE_HPP
#define SQUARE_HPP

class Square: public Rectangle//inherit Rectangle 
{
	public:
		Square(double);
		void setLength(double);
		void setWidth(double);
};

#endif
