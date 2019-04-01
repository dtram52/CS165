/*******************************
 *Author: Du Tram
 *Date: 11/2/2016
 *Description: this program has two functions decToBin and binToDec  to convert binary number to decimal number and vice versa
 * ****************************/

#include <iostream>
#include <string>
#include <cmath> //for power function pow()
using namespace std;

/*********************************************
 * Description: This function takes in a positive int value( decimal ) and return a string of 1s and 0s that are the binary representation of that number
 ********************************************/ 
string decToBin(unsigned int dec)
{	if(dec==0)
		return "";
	if(dec%2 == 1 )
		return decToBin(dec/2) + "1";
	else if (dec%2 == 0)// or we can use else since the int will either even or odd.
		return decToBin(dec/2) + "0";
}

/******************************************
 * Description:This function takes in a C++ string in binary  and return a positive number that are the decimal representation of the input string.
 * ***************************************/
int binToDec(string bin)
{
	int binlength = bin.length();
	if (binlength == 0)//if length is 0 the string ends so return 0.
	{
		return 0;
	}
	if (bin.at(0) == '1')//if the first element of string is '1', return 2^(binlength-1)+a recursive call to itself with the first element removed.
	{
		return pow(2, binlength - 1) + binToDec(bin.erase(0,1));
	}
	else//we can use else since we assume the string input must only have 1 and 0 as value.
// same as the case of the first element of '1',if its zero, we only recursively call the function and erase the first elemenet.
	{
		return binToDec(bin.erase(0,1));
	}
}
/*
*******************************************
 * Description: Main used for testing and  commented out
****************************************** 
int main()
{
	unsigned int dec1 = 3892, dec2 = 1923;
	string bin1 = "1100100", bin2 = "10111";
	cout << binToDec(bin1)<<","<< binToDec(bin2) <<endl;
	cout << decToBin(dec1)<<","<< decToBin(dec2) <<endl;
return 0;
}
*/
