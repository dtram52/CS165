/**************************************************
 * Author: Du Tram
 *Date: 10/19/2016
 *Description: takes as parameters an array of integer and returns a vector containing the modes
 ***************************************************/

#include<iostream>
#include <algorithm>
#include <vector>

using namespace std;
using std::vector;
using std::sort;

vector<int> findMode(int nums[], int size)
{	
	int maxFreq = 1;
	vector<int> modes;
//loop through all the integers
		for (int i = 0; i<size; i++)
		{
			int curFreq = 1;//accumulator for occurence of value at index i, starting from index i+1

//starting from index i+1 will prevent duplicated values being pushed to modes
			for (int j = i+1; j <size; j++)
			{	if (nums[i] == nums [j])
				{
					curFreq++;
				}	
			}
				if (curFreq == maxFreq)// if the accumulator for index i mathces the maximum frequency, push the value stored at index i to modes
				{	
					modes.push_back(nums[i]);
				}
				
			if (curFreq > maxFreq)
			{
				maxFreq = curFreq;
				modes.clear(); //we have other values that occur more, so we need to clear out values stored in modes
				modes.push_back(nums[i]);
			}

		}
		sort(modes.begin(), modes.end());			 
	return modes;

}
