/******************************************
 * Author: Du tram:
 * Date: 11/-7/2016
 * Description: Header file for class rectangle
********************************************/ 


#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle
{
private:
	double length, width;
public:
	void setLength(double);
	void setWidth(double);
	Rectangle(double, double);
	double area();
	double perimeter();
};
#endif
