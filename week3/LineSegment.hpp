/************************
 * Author: Du Tram
 * Date: 10/12/2016
 * Description: This is the specification file for LineSegment class.
 ************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp" //link to the header file of the  Point class 

class LineSegment
{
	private:
		Point end1, end2;
	public:
		LineSegment(Point,Point);
		Point getEnd1();
		Point getEnd2();
		double length();
		void setEnd1(Point);
		void setEnd2(Point);
		double slope();
};

#endif
