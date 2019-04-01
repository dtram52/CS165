#include "PreferredProject.hpp"

PreferredProject::PreferredProject(double h, double m, double t): CustomerProject(h,m,t)
{
}

//overrides billAmount
double PreferredProject::billAmount()
{
	return (0.85*materials) +(0.90*transportation)+ (hours<+100 ? 80*hours : 80*100);
}


