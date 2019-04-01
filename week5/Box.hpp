/**************************************
 *Author: Du Tram
 *Date : 10/12/2016
 *Description: This is a specification file for box class
 *we will have a box with width length height, get and set methods and functions to calculate volume and area.
 ****************************************/

#ifndef BOX_HPP
#define BOX_HPP

class Box 
{	private:
		double width;
		double length;
		double height;
	public:
		//default constructor
		Box();
		//constructor
		Box(double,double,double);
		//get 
		double getWidth();
		double getLength();
		double getHeight();
		//set
		void setWidth(double);
		void setLength(double);
		void setHeight(double);
		//Volume and area
		double getVolume();
		double getSurfaceArea();
};
#endif
		
