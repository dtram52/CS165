/**************************************************************
 *Author: Du Tram
 *Date: 11/16/2016
 *Description: Valset which represents a mathematical set of values
and all its functions
  * *************************************************************/
#include "ValSet.hpp"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

//contructor
template <class T>
ValSet<T>::ValSet()
{
	arr_size =10;
	num_elem =0;
//	arr_elem=(T*)malloc(sizeof(T)*10);
	arr_elem  = new T[arr_size];
}
/*template <class T>
ValSet<T>::ValSet(T*old_array, int new_size, int old_elements)
{
	arr_elem = new T[new_size];
//	arr_elem = (T*)malloc(sizeof(T)*new_size);
	arr_size = new_size;
	for (int i = 0; i <old_elements; i++)
	{
		arr_elem[i] = old_array[i];
	}
	num_elem = old_elements;
	delete[]old_array;
}
*/
template <class T>
ValSet<T> ValSet<T>::operator=(const ValSet &right)
{
	if (arr_size >0) delete [] arr_elem;
	arr_size = right.arr_size;
	arr_elem = new T[arr_size];
	for(int i = 0; i < arr_size; i++)
	arr_elem[i] = right.arr_elem[i];
	return *this;
}

template <class T>
ValSet<T>::ValSet(const ValSet &e) 
{	
	arr_size = e.arr_size;
	arr_elem = new T[arr_size];
	for(int i = 0; i< arr_size; i++)
		arr_elem[i]=e.arr_elem[i];
}

template <class T>
ValSet<T>::~ValSet()
{if(arr_elem !=NULL){
	delete[] arr_elem;
	}	
}
//size()
template <class T>
int ValSet<T>::size()
	{
		return num_elem;
	}

//The isEmpty() method should return true if ValSet contains no integers, and return false otherwise
template <class T>
bool ValSet<T>::isEmpty()
{
	return(num_elem ==0);
}

//contains()
template<class T>
bool ValSet<T>::contains(T elem)
{
	for(int i=0; i <num_elem; i++)
	{
		if(elem==arr_elem[i])
			return true;
	}
	return false;
}
//add()
template<class T>
void ValSet<T>::add(T elem)
{	if(contains(elem))
	return;
	if(arr_size == num_elem)
	{
		T*newArr = new T[2*arr_size];
	for(int i=0; i<num_elem; i++)
		{
			newArr[i]=arr_elem[i];
		}
	delete []arr_elem;
	arr_size = 2*arr_size;
	arr_elem = newArr;
	}
	arr_elem[num_elem] = elem;
	num_elem++;
}

/*		{
			ValSet(arr_elem, 2*arr_size, num_elem);
		}
		arr_elem[num_elem]=elem;
		num_elem++;
}
*/
//remove
template<class T>
void ValSet<T>::remove(T elem)
{	int i,pos;
	if(contains(elem) ==true)
	{	
		for (i=0; i<num_elem; i++)
		{
			if(elem==arr_elem[i])
			{
				pos=i; 
				break;
			}
		}
		for (i=pos; i<num_elem-1;i++)
		{
			arr_elem[i]=arr_elem[i+1];
		}
		num_elem--;
	}
}
//getAsVector method should return a vector (of type T) that contains all of the values in the ValSet and only those values.  
template<class T> 
vector<T> ValSet<T>::getAsVector()
{ vector<T> vect;
	
for (int i =0; i< arr_size; i++)	
	vect.push_back(arr_elem[i]);
	return vect;
}
	
template class ValSet<int>;
template class ValSet<char>;
template class ValSet<std::string>;
/* main commented out
int main() {
   ValSet<char> mySet;
   mySet.add('A');
   mySet.add('j');
   mySet.add('&');
   mySet.remove('j');
   mySet.add('#');
   int arrsize = mySet.size();
   ValSet<char> mySet2 = mySet;
   bool check1 = mySet2.contains('&');
   bool check2 = mySet2.contains('j');

}

*/
