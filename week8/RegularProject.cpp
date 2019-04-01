/**************************
 * Author: Du Tram
 * Date: 11/15/2016
 * Description: Implementation file for class RegularProject
 *****************************/

#include "RegularProject.hpp"
RegularProject::RegularProject(double h, double m, double t):
CustomerProject(h,m,t)
{
}

//overrides billAmount
double RegularProject::billAmount()
{
	return materials +transportation + 80*hours;
} 
