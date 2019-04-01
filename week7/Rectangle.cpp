/**********************************************
**Author: Du Tram
**Date: 11/7/2016
**Description: Implementation file for Rectangle class
 ***********************************************/

 #include "Rectangle.hpp"

Rectangle::Rectangle(double l1, double w1)
{
	setLength(l1);
	setWidth(w1);
}

void Rectangle::setLength(double l1)
{
	length = l1;
}

void Rectangle::setWidth(double w1)
{
	width = w1;
}
/***************************
 * Description: Function to calculate the area of a rectangle
 **************************/ 
double Rectangle::area()
{	
	return length*width;
}
/*******************************
 * Description: Function to calculate the perimeter of a rectangle
 ******************************/ 
double Rectangle::perimeter()
{
	return 2*length + 2*width;
}
