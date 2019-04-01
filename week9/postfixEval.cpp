/***************************************************
 * Name: Du Tram
 * Date: 11/23/2016
 * Description: This function evaluates postfix which takes C string parameter and return a double
 ********************************************************************/
#include<stack>
#include<cstdlib>
#include<stdio.h>
#include<iostream>
#include<cctype>
#include<string.h>
using namespace std;

double postfixEval(char cstrIn[])
{

  stack<double> temp;
  double temp1, temp2;
  char *ptk;

  ptk =strtok(cstrIn, " ");

  while (ptk != NULL)
    {
       if (*ptk == '+')
	{
	  temp1 = temp.top();
	  temp.pop();
	  temp2 = temp.top();
	  temp.pop();
	  temp.push(temp1 + temp2);
	}
      else if (*ptk == '-')
	{
	  temp1 = temp.top();
	  temp.pop();
	  temp2 = temp.top();
	  temp.pop();
	  temp.push(temp1 - temp2);
	}
      else if (*ptk == '*')
	{
	  temp1 = temp.top();
	  temp.pop();
	  temp2 = temp.top();
	  temp.pop();
	  temp.push(temp1 * temp2);
	}
      else if (*ptk == '/')
	{
	  temp1 = temp.top();
	  temp.pop();
	  temp2 = temp.top();
	  temp.pop();
	  temp.push(temp1 / temp2);
	}
      else
	{
	  temp.push(std::atof(ptk));
	}
       ptk = strtok(NULL, " ");
    }
 return temp.top();
}
