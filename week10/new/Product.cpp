/********************************************************************
 *Author: Du Tram
 *date: December 1, 2016
 *Description: This is implementation file for class Product, part of the store stimulator.
 *******************************************************************/
#include "Product.hpp"
#include <iostream>
#include <string>

// constructor. 
Product::Product(std::string id, std::string t, std::string d, double p, int qa) 
{
	idCode = id;
	title = t;
	description = d;
	price = p;
	quantityAvailable = qa;
}

/*********************************************************************
** getIdCode: getter for productID.
*********************************************************************/
std::string Product::getIdCode() 
{
	return idCode;
}

/*********************************************************************
** getTitle:  getter for the product's title.
*********************************************************************/
std::string Product::getTitle() 
{
	return title;
}

/*********************************************************************
** getDescription: getter for the description.
*********************************************************************/
std::string Product::getDescription() 
{
	return description;
}

/*********************************************************************
** getPrice  getter for price.
*********************************************************************/
double Product::getPrice() 
{
	return price;
}

/*********************************************************************
** getQuantityAvailable: getter  for quantity available.
*********************************************************************/
int Product::getQuantityAvailable() 
{
	return quantityAvailable;
}

/*********************************************************************
** decreaseQuantity function decreases quanitty avaible by one.
*********************************************************************/
void Product::decreaseQuantity() 
{
	quantityAvailable--;
}
