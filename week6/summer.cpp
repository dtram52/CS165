/************************************************
**Author: Du Tram
**Date: 11/01/2016
**Description: this function takes two parameters: an array and the size  and returns the sum of the values in the array using a recursive function.
 ************************************************/

 #include <iostream>

using namespace std;
double summer(double arr[], int size)
{	
	size -=1;//makes the size smaller everytime the function is recursively called
	//base case, if there is only one element
	if (size ==0)
		return arr[size];
	else
		return  arr[size]+ summer(arr,size);//recursively calls function summer
}
//main for testing only. Expects 231.1
int main()
{
	double arr[10]={1.5,2.6,3,10,18,27,7,10,150,2};
	double arr1[1]={1};
	const int size =10, size1=1;
	cout << summer(arr, size) <<summer(arr1, size1)<< endl;
	return 0;
}
	
