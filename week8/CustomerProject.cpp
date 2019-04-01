/************************************
 * Name: Du Tram
 * Date: 11/15/2016
 * Description: Implementation file for the CustomerProject class
 *************************************/

#include "CustomerProject.hpp"

CustomerProject::CustomerProject(double h, double m, double t)
	{
		setHours(h);
		setMaterials(m);
		setTransportation(t);
	}

//setters and getters
void CustomerProject::setHours(double h)
{
	hours = h;
}
void CustomerProject::setMaterials(double m)
{	
	materials = m;
}

void CustomerProject::setTransportation(double t)
{
	transportation = t;
}

double CustomerProject::getHours()
{
	return hours;
}

double CustomerProject::getMaterials()
{
	return materials;
}

double CustomerProject::getTransportation()
{
	return transportation;
}

