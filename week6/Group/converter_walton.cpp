/********************************************************************
** N
*cription: Main used for testing and  commented out
****************************************** 
int main()
{
	unsigned int dec1 = 3892, dec2 = 1923;
	string bin1 = "1100100", bin2 = "10111";
	cout << binToDec(bin1)<<","<< binToDec(bin2) <<endl;
	cout << decToBin(dec1)<<","<< decToBin(dec2) <<endl;
return 0;
}
* Date: October 28, 2016
** Description: Functions to convert between binary and decimal bases
********************************************************************/

#include <iostream>
#include <string>
#include <cmath>

/************************************************
*                                               *
* A Function to convert a string representation *
* of a binary number to the equivalent number   *
* in base ten.                                  *
*                                               *
*************************************************/

int binToDec(std::string str) {

    // base case when the string has no characters left.

    if (str.length() == 0)

        return 0;

    // case when the string has characters left

    else {

        // if the left-most character is a 0, add 0 to the number returned

        if (str.substr(0, 1) == "0")

            return 0 + binToDec(str.substr(1, str.length() - 1));

        // if the left-most character is a 1, the power of 2 represented by that
        // character position to the number returned

        else

            return pow(2, str.length() - 1) + binToDec(str.substr(1, str.length() - 1));

    }

}

/************************************************
*                                               *
* A function  to convert a positive integer     *
* into the string representation of the number  *
* in binary.                                    *
*                                               *
*************************************************/

std::string decToBin(int num, int power, std::string str) {

    // base case when there are no more powers of 2 left

    if (power < 0)

        return str;

    // case when we have not yet reached 0 

    else {

        // if the current power of 2 is larger than the number
        // add a 0 to the string and reduce the power of 2 by one

        if (pow(2, power) > num) {

            str.push_back('0');

            return decToBin(num, power - 1, str);

        }

        // if the current power of 2 is not larger than the number
        // add a 1 to the string, subtract the power of 2 from the 
        // number and reduce the power of 2 by one

        else {

            str.push_back('1');

            return decToBin(num - pow(2, power), power - 1, str);

        }

    }

}

/************************************************
*                                               *
* A helper function that finds the largest      *
* power of 2 in the number passed to it. It     *
* starts the process of building the string by  *
* starting the string with a 1 and passing the  *
* number reduced by the power of 2, the power   *
* of 2 reduced by one and the start of the      *
* string.                                       *
*                                               *
*************************************************/

std::string decToBin(int num) {

    // variable to hold the power of 2

    int power = 0;

    // loop to find the largest power of 2 no larger than the number

    while (pow(2, power + 1) <= num)

        power++;

    // call the recursive function in the return line

    return decToBin(num - pow(2, power), power - 1, "1");

}

/*******************************************
 * Description: Main used for testing and  commented out
******************************************/
using namespace std;
int main()
{
	int dec1 = 3892, dec2 = 1923;
	string bin1 = "1100100", bin2 = "10111";
	cout << binToDec(bin1)<<","<< binToDec(bin2) <<endl;
	cout << decToBin(dec1)<<","<< decToBin(dec2) <<endl;
return 0;
}

