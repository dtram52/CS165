/*************************************
 * Author: Du Tram
 * Date: 11/15/2016
 * Description: Header file for the ValSet Class
 * **********************************/

#include <vector>
#include <string>
#ifndef VALSET_HPP
#define VALSET_HPP
using namespace std;

template <class T>
class ValSet
{
	private:
		int num_elem, arr_size;
		T* arr_elem;//pointer to T that points to a dynamic array of elements;
	public:
		ValSet();
		~ValSet();
		ValSet(const ValSet &);
//		ValSet(T* old_array, int new_size, int old_elements);
		ValSet operator=(const ValSet &right);
		int size();
		bool isEmpty();
		bool contains(T elem);
		void add(T elem);
		void remove(T elem);
		vector<T> getAsVector();

};
#endif	
