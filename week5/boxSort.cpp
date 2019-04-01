/************************************************
** Author: Du Tram
** Date: 26/10/2016
** Description: this is boxSort function that takes in array of objects Box and sort them by their volumes from largest to smallest.
*************************************************/
 
#include <iostream>
#include "Box.hpp"//links header file that used for assignment 3

using namespace std;

void boxSort(Box arr[], int size)
{	
	Box tempBox;//necessary variables
	bool swap;//flag
	
	do
{
	swap = false;
	for(int count = 0; count <(size -1); count++)
	{	
		if(arr[count].getVolume() < arr[count+1].getVolume())//uses getVolume to get the volumes to compare them
		{
			tempBox = arr[count];
			arr[count] = arr[count+1];
			arr[count+1] = tempBox;
			swap = true;
		}
	}
}
	while(swap);
}

//main function for testing
/*
int main()
{

  const int NUM_BOXES= 5;
  
  Box array[NUM_BOXES];

  array[0].setLength(2);
  array[0].setWidth(2);
  array[0].setHeight(25);

  array[1].setLength(5.5);
  array[1].setWidth(5.5);
  array[1].setHeight(5);

  array[2].setLength(1.5);
  array[2].setWidth(1);
  array[2].setHeight(1);

  array[3].setLength(50);
  array[3].setWidth(50);
  array[3].setHeight(5);

  array[4].setLength(205);
  array[4].setWidth(205);
  array[4].setHeight(205);

  boxSort(array, NUM_BOXES);

  for (int i = 0; i < NUM_BOXES; i++)
    {

      std::cout << array[i].getVolume() << std::endl;
    }

  
  return 0;

}
