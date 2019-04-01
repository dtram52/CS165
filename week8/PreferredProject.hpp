#ifndef PREERREDPROJECT_HPP
#define PREFERREDPROJECT_HPP
#include "CustomerProject.hpp"

class PreferredProject: public CustomerProject
{	//don't need private
	public: 
		PreferredProject(double, double, double);
		virtual double billAmount();
};
#endif


