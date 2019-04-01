#include<iostream>
#include<fstream>
using name space std;

int main()
{
	int int1 = 10;
	int int2 = 50;	
	ofstream outputFile;
	outputFile.open("demo2b.txt");
	outputFile << int1 <<endl;
	outputFile << int2 << endl;
	outputFile.close()
return 0;
}
