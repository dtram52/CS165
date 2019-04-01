/*********************************************************************

** Author: Deirdre Moran

** Date: 11/2/2016

** Description: converter.cpp has two functions.  The first, binToDec,
				is a program that takes as a parameter a string that
				represents a binary number and then uses a recursive function
				to convert the string into the decimal number it represents
				and returns the number as an integer.
				The second method, decToBin, takes a positive integer as
				its paramter and converts that number through recursion
				into its binary form and then returns it as a string.

*********************************************************************/
#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Converts a binary number to its decimal equivalent through recursion, returns int
int binToDec(string binaryInt)
{
	if (binaryInt.length() < 1)  // Base case
	{
		return 0;
	}

	if (binaryInt.at(0) == '1')  // If first binary num of string is '1'
	{
		int temp = pow(2, binaryInt.length() - 1); // Convert '1' to decimal
		binaryInt.erase(0, 1);  // Erase the first element of the string
		return temp + binToDec(binaryInt);  // Return temp and recursive call
	}

	if (binaryInt.at(0) == '0')  // If first binary num of string is '0'
	{
		binaryInt.erase(0, 1);	// Erase the first element of the string
		return binToDec(binaryInt);  // Return recursive call
	}
}

// Converts decimal number to its binary equivalent using recursion, returns string
string decToBin(int intVal)
{
	if (intVal == 0)  // Base case
	{
		return "0";
	}

	if (intVal % 2 == 1)  // If the intVal has a remainder of 1 when divided by 2
	{
		string temp = "1";  // Assign '1' to temp string
		if (intVal > 1)		// If intVal is greater than 1
		{
			intVal = intVal / 2;  // Divide intVal by 2
		}
		else if (intVal == 1)  	// If intVal is '1', add '1' to string
		{
			return "1";
		}
		return decToBin(intVal) + temp;  // Recursive call will add temp to end of string and
	}									// run recursive call

	if (intVal % 2 == 0)	// If intVal has no remainder when divided by 2
	{
		string temp = "0"; // Set temp to '0'
		intVal = intVal / 2;  // Divide the intVal by 2
		return  decToBin(intVal) + temp;  // Recursive call will add temp to end of string and
	}									// run recursive call
}


int main()
{
	string binaryNum = "110101010110000101010000101001";
	int decNum = 894981161;
	int a = binToDec(binaryNum);
	string b = decToBin(decNum);
cout << a << endl;
cout << b << endl;
}
