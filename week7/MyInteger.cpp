/************************************************
 *Author: Du Tram
 *Date: 11/9/2016
 *Description: Implementation file for class MyInteger
 * ***********************************************/
#include "MyInteger.hpp"

MyInteger::MyInteger(int x1)
{	
	pInteger = new int; //new int return a pointer
	*pInteger = x1;//sets the value that the pointer points to.
}

MyInteger::MyInteger(const MyInteger& myobj)
{
	pInteger = new int;
	*pInteger = *(myobj.pInteger);//setting pointer value to object passed
}

//Destructor
MyInteger::~MyInteger()
{	
	delete pInteger;
}

//overloading operator =
MyInteger MyInteger::operator=(const MyInteger& myobj)
{
	pInteger = new int;
	*pInteger = *(myobj.pInteger);
	return *this;
}

int MyInteger::getMyInt()
{
	return *pInteger;
}

void MyInteger::setMyInt(int x1)
{
	*pInteger = x1;
}
