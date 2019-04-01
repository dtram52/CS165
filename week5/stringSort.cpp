/**********************************************
 * Author: Du Tram
 * Date: 10/24/2016
 * Description: this program include a selector sort function that sort through array of strings regardless of string's case, a main function to test that will be commented out
*************************************************/  

#include <iostream>
#include <string>

using namespace std;
/**********************************
 * Description:This function will help compare the strings case-insensitively byusing toupper function
 *********************************/
 
bool compareString(string stringOne, string stringTwo)
{
	int lengthOne, lengthTwo, count = 0;
	bool returnBool = false,
	     flagBool = true; //used to flag the outcome to exit the loop of comparing each value of the strings
	lengthOne = stringOne.length();
	lengthTwo = stringTwo.length();
	//loop to compare the strings
	while(flagBool && (count < lengthOne) && (count <lengthTwo))
	{
		if(toupper(stringOne.at(count)) < toupper(stringTwo.at(count)))
		{
			returnBool = true;
			flagBool = false;
		}
		else if (toupper(stringOne.at(count))>toupper(stringTwo.at(count)))
 		{
			returnBool = false;
			flagBool = false;
		}
		count++;
	}
	return returnBool;
}
/**********************************
 * Description: stringSort function to selection sort through array of strings
 **********************************/
 
void stringSort(string array[], int size)
{	
	int startScan, minIndex;
	string minString;

		for(startScan = 0; startScan < (size - 1); startScan++)
		{	
			minIndex = startScan;
			minString = array[startScan];
		
			for(int index = startScan +1; index <size; index++)
			{	
				if(compareString(array[index], minString))//instead of comparing strings directly, we call the function that compare case insensitive. 
				{
					minString = array[index];
					minIndex = index;
				}
			}
			array[minIndex] = array[startScan];
			array[startScan]= minString;
		}
}
//main for testing
/*
int main()
{
	const int SIZE = 8;
	string zoo[SIZE];

	zoo[0] = "Zebras";
	zoo[1] = "LionS";
	zoo[2] = "leopardbaby";
	zoo[3] = "zebras";
	zoo[4] = "alligator";
	zoo[5] = "Alligatora";
	zoo[6] = "alligatorb";
	zoo[7] = "PANDA";

	stringSort(zoo, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
	   	cout << zoo[i] << '\n';
	}

  return 0;
}
*/
