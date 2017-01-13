/**************************************************************************
 *Author: Du Tram
 *Date: December 1; 2016
 *description: Implementation file for the class Customer, a part of a store stimulator.
 **************************************************************************/
#include "Customer.hpp"
#include <vector>


// constructor
Customer::Customer(std::string n, std::string a, bool pm) {
	name = n;
	accountID = a;
	premiumMember = pm;
}


/*********************************************************************
* getAccountID : getter for the member ID.
*********************************************************************/
std::string Customer::getAccountID() {
	return accountID;
}


/*********************************************************************
** getCart: getter for the member's cart.
*********************************************************************/
std::vector<std::string> Customer::getCart() {
	return cart;
}


/*********************************************************************
** addProductToCart function adds a product's title to the customer's cart.
*********************************************************************/
void Customer::addProductToCart(std::string p) {
	cart.push_back(p);
}


/*********************************************************************
** bool isPremiumMember : return true if premium
*********************************************************************/
bool Customer::isPremiumMember() {
	return premiumMember;
}


/*********************************************************************
** emptyCart function empties the member's cart.
*********************************************************************/
void Customer::emptyCart() {
	cart.clear();
}
