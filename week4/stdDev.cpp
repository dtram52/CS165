/****************************************
 * Author: Du Tram
 * Date: 10/18/2016
 * Description: take parameters of array of pointersr and size to calculate the standard deviation through loop
 * ***************************************/


#include "Student.hpp"
#include <iostream>
#include <cmath>// need to use sqrt
using namespace std;
// function stdDev that calculates standard deviation.
double  stdDev(Student *scoreArr[], int size)
{
	double Total=0;
	double mean=0;
//loop to find total
	for (int  i = 0; i < size; i++)
	{	
		Total += scoreArr[i]->getScore();
	}

	mean = Total/size;

	double stdD;
//loop to calculate standard deviation.
	for (int i=0; i<size; i++)
	{
		stdD += (scoreArr[i]->getScore() - mean)*(scoreArr[i]->getScore() - mean);	
	}
	stdD = sqrt(stdD/size);
return stdD;
}
//Main for testing
int main()
{ 
	const int size = 3;
	Student *scoreArr[] = { new Student("Du", 10), new Student("Tram", 20), new Student("Man", 30)};
	cout<<"standard deviation:"<< stdDev(scoreArr, size)<<endl; 
return 0;
}

