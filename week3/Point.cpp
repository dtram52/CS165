/**************************************
 ** Author: Du Tram
 ** Date: 10/12/2016
 ** Description: This is the implementation file for the point class.
*****************************************/

#include "Point.hpp"// link to header file
#include <cmath> // for square root function (sqrt())
using namespace std;

//Default constructor initializing member xCoord and yCoord to zeros
Point::Point()
{	setXCoord(0.0);
	setYCoord(0.0);
}
//constructor to initialize the xCoord and yCoord to the values given by x and y parameters, respectively.
Point::Point(double x, double y)
{	setXCoord(x);
	setYCoord(y);
}
 /*************************************
 * Description: This function calculates and returns the distance between a Point and an "other" point, passed in by a constant referece
 ************************************/

double Point::distanceTo(const Point &otherPoint)
{
	double xDist = otherPoint.xCoord - xCoord;
	double yDist = otherPoint.yCoord - yCoord;
		return sqrt(xDist*xDist + yDist*yDist);
}

double Point::getXCoord()
{
	return xCoord;
}

double Point::getYCoord()
{	
	return yCoord;
}

void Point::setXCoord(double x)
{ 
	xCoord = x;
}

void Point::setYCoord(double y)
{
	yCoord = y;
}	
	
