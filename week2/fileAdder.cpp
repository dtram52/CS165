/*************************************
 * Author: Du Tram
 * Date: 10/05/2016
 * Description: this progrm asks the user for name of a file and tries to open it, after that, it will add together the intergers in the file (if any).
 * The program will also write the sum to an output file called sum.txt. It will display error if there were no input file to get intergers from
 * **********************************/  



#include <string>
#include <iostream>
#include <fstream> 
using namespace std;
int main()
{
	ifstream inputFile;//File stream object
	ofstream outputFile;
	string fileName;//holds the user's entered file name 
	int numValues=0; //number of values in the file, used as counter, optionally created
	int value;//value in file  to read
	int total=0;
	//Ask user for the name of a file  
	cout << "Enter the name of the file to read from:"<< endl;
	cin >> fileName;
	//Open the file
	inputFile.open(fileName);
	if (inputFile)//if there is the input file
	{
		//Read the numbers from the file 
		while (inputFile >> value)//while loop to add up values
		{	numValues++;//optional to keep track of how many loops
			total += value;
		}
		outputFile.open("sum.txt");//open an output file named sum.txt
		outputFile << total << endl;//write sum to that file
		//close the output and input file
		inputFile.close();
		outputFile.close();
	}
	else// the file is not there
	{
		//Display error message
		cout << "could not access file" << endl;
	}
	return 0;
}
		
