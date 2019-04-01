/***********************************************************************
******************
** Author: Elizabeth May    (mayel)
** Date: 11-2-16
** Description: CS 165 - Assignment #6 - Project B - converter.cpp
** Assignment Instructions at bottom. 
** Program includes two recursive functions (binToDec & decToBin) that convert 
** positive interger values to decimal and binary form. 
** Without using built in base conversion functions in C++. 
***************************************************************************
*****************/

//this is the implementation file converter.cpp

#include <iostream>
#include <string> //need for strings throughout
#include <cmath> //need for pow()


//binToDec function - convert binary to integer/decimal

int binToDec(std::string binaryS, int l, int p)
{
	if(p == binaryS.length())  //check if position has reached end of string
	{
		return 0;
	}
				
	if(binaryS.at(p) == '0')   //binary zero marker does not need to have power applied 	
	{
			
		return 0 + binToDec(binaryS, l - 1, p + 1);
	}
	else
	{
		return pow(2,(l - 1)) + binToDec(binaryS, l - 1, p + 1);
	}

} //end binToDec 


//binToDec HELPER FUNCTION 

int binToDec(std::string binString) //helper function
{
	
	int length = binString.length();
	int position = 0; //string position 
	return binToDec(binString, length, position);
	
}//end helper 


/***************************************************************************/


// decToBin function - convert integer/decimal to binary 

std::string decToBin(int value) 
{
	

	if(value == 1)	//base check, don't need to keep going once value is 1.   
	{
		return "1";
	}
	
	
//Important to call recursion before adding to string 
//by doing so, the binary output is in correct order.   

	if(value % 2 == 0)	//if no remainder add 0 to string
	{
		return decToBin(value/2) + "0";   
	}
		
	if(value % 2 == 1)	//if there is remainder (1) add 1 to string
	{
		return decToBin(value/2) + "1";
	}	

	
}//end decToBin 


 // int main() test in separate .cpp file 



