/*************************
 * Author: Du Tram
 * Date 10/12/2016
 * Description: This is the header for class Point
 **************************/

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
	private:
		double  xCoord,
			yCoord; 
	public:
		//Constructors 
		Point();
		Point(double, double);
		//Function Prototypes
		double distanceTo(const Point&);
		double getXCoord();
		double getYCoord();
		void setXCoord(double);
		void setYCoord(double);
		
};
#endif
