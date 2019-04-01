/***********************************
**Author: Du Tram
**Date: 11/9/2016
**Description:Implementation file for Square class which inherits from Rectangle class
************************************/
#include "Rectangle.hpp"
#include "Square.hpp"

Square::Square(double side):
	Rectangle(side, side)
	{
	}

void Square::setLength(double side)
	{
	Rectangle::setLength(side);
	Rectangle::setWidth(side);
	}

void Square::setWidth(double side)
	{
	Rectangle::setLength(side);
	Rectangle::setWidth(side);
	}
