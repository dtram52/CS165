#include <iostream>
#include <string>
const int numberofnum = 5;

int main()

{
double num1,num2,num3,num4,num5,average;
std::cout <<  "Please enter five numbers."<<std::endl;
std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
average = double (num1+num2+num3+num4+num5)/double(numberofnum);
std::cout<<"The average of those numbers is:"<<std::endl;
std::cout<< average <<std::endl;
return 0;
}

