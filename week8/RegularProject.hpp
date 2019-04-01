/***********************************
 *Authori: Du tram
 * Date: 11/16/2016
 *Regularproject header file
 * ********************************/

#ifndef REGULARPROJECT_HPP
#define REGULARPROJECT_HPP

#include "CustomerProject.hpp"

class RegularProject: public CustomerProject
{
	public: 
		RegularProject(double,double,double);
		virtual double billAmount();
};
#endif
