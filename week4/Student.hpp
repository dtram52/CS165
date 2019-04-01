/**********************
* *Author: Du Tram
**Date: 10/19/2016
** Descriptiom: header file for the class Student	
 ****************************/



#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string> //needs string for name
using namespace std;

class Student
{
	private: 
		string name;
		double score;
		
	public:
		//default constructor
		Student();
		//constructor
		Student(string, double);
		//get
		string getName();
		double getScore();


};
#endif
