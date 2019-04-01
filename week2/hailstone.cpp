/*****************************************
 * Author: Du Tram
 * Date: 10/05/2016
 * Description: hailstone function will take a number from user and keep deviding it by two or multiply by 3 and add 1 to make a number go around in a loop, 
 * the function will count the step the number needs to take to reach 1
 * ***************************************/    

#include<iostream>
using namespace std;
int hailstone(int start)//function header with argument pass into start 
{	int count = 0; // counter for the step that the interger will go through
	while (start !=1)
	{	if((start%2)==0)//if it's even or divisible by 2
			start = start/2;//divide it by 2
		else//if not even
			start = start*3+1;
				count++;//increment each time the loop iterates
	}		
	return count;//we want to know number of steps so return the count, if start is 1 then count will not get into loop and stay at zero
}	
	
/*int main()
{	cout << hailstone(1) <<endl;
	return 0;
}
*/
