/**************************************
 *Author: Du Tram
 *Date: 10/12/2016
 *Description: This is the Box class function  implementation file.
 * This file implement the functions in class Box and use the definition from header file Box.hp`
 *********************************************/ 






#include <iostream>
#include "Box.hpp" //link to the box header file

using namespace std;

// default constructor. It initializes the width, length, height to ones 
 Box::Box()
{	
	setWidth(1);
	setLength(1);
	setHeight(1);
}

//constructor
Box::Box(double w, double l, double h)
{
	setWidth(w);
	setLength(l);
	setHeight(h);
}
/**************************
 * Description: this is getVolume function which calculates and return Volume of the box by taking in the 3 parameter: width, lenght and height .
 **************************/
 
double Box::getVolume()
{
	return width*length*height;
}
/*************************
 * Description: this is the getSurfaceArea function that calculate and return the surface of box
 ************************/
 
double Box::getSurfaceArea()
{
	return (2*width*length)+(2*length*height)+(2*height*width);
}
// get and set
double Box::getWidth()
{	
	return width;
}

double Box::getLength()
{
	return length;
}

double Box::getHeight()
{
	return height;
}

void Box::setWidth(double w)
{	
	width = w;
}

void Box::setLength(double l)
{
	length = l;
}

void Box::setHeight(double h)
{
	height = h;
}


