/************************************************
 **Author: Du Tram
 ** Date: 10/19/2016	
 **Description: sort the integers into ascending order.
*************************************************/ 
#include <iostream>
using namespace std;

/*from last assignment i used swap, for reference only
   void swap(int&one, int&two)
{
	int temp;
	if (one > two)
	{
		temp = one;
		one = two;
		two = temp;
	}
}*/

void smallSort2(int *ptr1, int *ptr2, int *ptr3)
{
	int temp;//temp to switch
	if(*ptr1 > *ptr2)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
	}
	if(*ptr1 > *ptr3)
	{
		temp = *ptr1;
		*ptr1 = *ptr3;
		*ptr3 = temp;	
	}
	if(*ptr2 > *ptr3)
	{
		temp = *ptr2 ;
		*ptr2 = *ptr3;
		*ptr3 = temp;
	}
}
/*
int main()

{
	int a =14;
	int b = -90;
	int c = 2;
smallSort2(&a, &b, &c);
cout << a << "," << b << "," << c << endl;
return 0;
}
*/

