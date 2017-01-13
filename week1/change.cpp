#include<iostream>
const int QUARTER =25;
const int DIME=10;
const int NICKEL=5;
const int PENNY=1;
int main()
{std::cout<<"Please enter an amount in cents less than a dollar."<<std::endl;
int money;
std::cin>>money;
std::cout<<"Your change will be:"<<std::endl;
int  quarter = (money/QUARTER);
money %= QUARTER;
int  dime=(money/DIME);
money %= DIME;
int nickel = (money/NICKEL);
money %= NICKEL;
int penny = (money/PENNY);
std::cout<<"Q:"<<quarter<<std::endl;
std::cout<<"D:"<<dime<<std::endl;
std::cout<<"N:"<<nickel<<std::endl;
std::cout<<"P:"<<penny<<std::endl;
return 0;
}
