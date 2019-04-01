/*******************************************************************************8
 ** Author: Du Tram
 ** Date: 10/05/2016
 ** Description:the function fallDistance can be used to determine the distance an object falls due to gravity in a specific time period
***********************************************************************/

#include <iostream>
using namespace std;

/*double fallDistance(double time);
int main()
{	double  t;
	cout <<"Let\'s test with a time t, insert a t please!"<<endl;
	cin >> t;
	double exdistance = fallDistance(t);
	cout << exdistance <<endl;
	return 0;
}
*/

double  fallDistance(double time)
{	double distance;
	const double GRAVITY  = 9.8;
	distance= 0.5*GRAVITY*time*time;
	return distance;
}
	



