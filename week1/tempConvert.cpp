#include <iostream>
int main()
{
std::cout<<"Please enter a Celsius temperature."<<std::endl;
double Celsius,Fahrenheit; 
std::cin>> Celsius;
std::cout<<"The equivalent Fahrenheit temperature is:"<<std::endl;
Fahrenheit =(double(9)/5)*Celsius + 32;
std::cout<< Fahrenheit<<std::endl;
return 0;
}
