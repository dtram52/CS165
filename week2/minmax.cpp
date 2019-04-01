/*************************************
 **Author:Du Tram 
 **Date:10/01/2016
 **Description: This program asks users how many integers they would like to know the min and max from. After the numbers are enter, the program display the min and max of the numbers the user enters.   
 *************************************/ 

#include <iostream>
using namespace std;

int main()
{
	int numofNum, num; //number of intergers user would like to enter and the num represents the intergers 
	int min, max;
	bool firstStep = false;
	
	cout << "How many intergers would you like to enter?"<<endl;
	cin >> numofNum;// take the number of integers user wants to input 
	cout << "Please enter "<< numofNum <<" intergers."<<endl;//ask for intergers
	
	for (int count = 0;  count < numofNum; count++)//use count as counter for a for loop
		{	
			cin >> num; // take in users' numbers as num
		
			if (firstStep==false)//first step to start loop
			{	
				min = num;
			 	max = num; //initialize min and max
				firstStep = true; 
			}
			else	
			{	
				if (num < min)// check to see if num is smaller  
		 			min = num; //if its smaller then put it in min, if not move on until it gets the smallest numb
				else if (num > max) //same as min case
					max = num;
			}
		}	
		cout<<"min:"<<min<<endl;//display the min we recorded above
		cout<<"max:"<<max<<endl; //display max
	return 0;
}
