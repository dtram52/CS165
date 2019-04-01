/*************************************
 *Author: Du Tram
 *Date: 11/15/2016
 *Description: This the specification file of CustomerProject class. It's an abstract base class
 * ***********************************/
#ifndef CUSTOMERPROJECT_HPP
#define CUSTOMERPROJECT_HPP

class CustomerProject
{	
	protected:

		double hours, materials, transportation;
	public:
		void setHours(double);
		void setMaterials(double);
		void setTransportation(double);

		double getHours();
		double getMaterials();
		double getTransportation();
		
		CustomerProject(double,double,double);
//		~CustomerProject();//destructor, not required
		virtual double billAmount() = 0;//pure virtual function
};

#endif
