/**********************************************************
 **Author: Du Tram
 **Date: 09/22/2016
 **Description:This program will aak for user's favoverite animal and reply to user what it's.
 *****************************************************/
#include<iostream>
#include<string>
//a simple example program
//
int main()
{
std::string faveAnimal;
std::cout <<"Please enter your favorite animal." <<std::endl;
std::cin>>faveAnimal;
std::cout<<"Your favorite animal is the " << faveAnimal;
std::cout<<"."<<std::endl;
return 0;
}
