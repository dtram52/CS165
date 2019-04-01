/*****************************
 * Author: Du Tram
 * Date: 11/9/2016
 * Description: Header file for class MyInteger
********************************/
 
#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

class MyInteger
{
	private:
		int* pInteger;
	public:
		void setMyInt(int);
		int getMyInt();
		MyInteger(int);
		MyInteger(const MyInteger&);
		~MyInteger();
		MyInteger operator=(const MyInteger&);
};

#endif
