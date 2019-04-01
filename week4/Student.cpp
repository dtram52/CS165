#include "Student.hpp"
#include <iostream>
#include <string>

using namespace std;

string Student::getName()
	{
		return name;
	}
double Student::getScore()
	{
		return score;
	}
//default constructor
Student::Student()
{
	name = "Du Tram";
	score = 10;
}
//constructors with 2 parameters
Student::Student(string sname, double sscore)
{
	name = sname;
	score =sscore;
}












	


