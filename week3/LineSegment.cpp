/************************************
 ** Author: Du Tram
 ** Date: 10/12/2016
 ** Description: this is the implementation file for LineSegment Class
************************************/

#include "LineSegment.hpp" //link to header file

//constructor
LineSegment::LineSegment(Point first, Point second)
{
	setEnd1(first);
	setEnd2(second);
}
//get end function 
Point LineSegment::getEnd1()
{	
	return end1;
}

Point LineSegment::getEnd2()
{
	return end2;
}

/****************************
Description: This function calculates and returns the length of LineSegment by calling the distanceTo() function from Point class
********************************/

double LineSegment::length()
{
	return end1.distanceTo(end2);
} 

// setEnd1 and setEnd2 to set the first end point and second end point
void LineSegment::setEnd1(Point first)
{
	end1 = first;
}

void LineSegment::setEnd2(Point second)
{
	end2 = second;
}

/****************************************
 * Description: This function calculates and returns the slope of the LineSegment.
 ****************************************/ 
double LineSegment::slope()
{
	double  x1 = end1.getXCoord(),
		x2 = end2.getXCoord(),
		y1 = end1.getYCoord(),
		y2 = end2.getYCoord();
return (y2 - y1)/(x2 - x1);
}
	 
