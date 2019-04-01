/*******************************************************
 * Author: Du Tram
 * Date: 10/05/2016
 * Description: This assignment includes the main function to test and was commented out, a swap fuction and a smallSort function to sort three intergers into ascending order
 ******************************************************/
  
#include <iostream>
using namespace std;

/*Fuction prototype and main function that used for testing
 * void swap(int &a, int &b);
void smallSort( int &num1, int&num2, int&num3); 
int main()
{
	int a = 14;
	int b = -90;
	int c = 2;
	smallSort(a, b, c);
	cout << a << "," << b <<"," << c << endl;
	return 0;
}
***********************************************/

/********************
 * Description: swap function used to swap into asceding order, the arguments passed into a and b are passed by reference
 * *****************/
void swap(int &a, int &b)//function header (arguments passed by reference)
{  
	int temp;// a temp variable to temporarily put a value in it to swap
	if (a > b)//if the numbers are out of order, swap them
		{	
			temp = a;
			a  = b;
			b = temp;}
/************************
 * Description: smallSort function uses swap function to compare and respectively swap num1 num2 and num3 into ascending order,
 * the arguments are also passed into the parameters by reference
 * **********************/ 
}
void smallSort(int &num1, int &num2, int&num3)
{//compare each pair
	if (num1 > num2)
		swap(num1, num2);
	if (num1 > num3)
		swap(num1, num3);
	if (num2 > num3)
		swap(num2, num3);
}
