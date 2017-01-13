/**********************************************************************
 *Author: Du Tram
 *Date: December 1, 2016
 *Description: Store implementation file for the store program.
 ***********************************************************************/
#include "Store.hpp"
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>

/*********************************************************************
* addProduct function adds a Product object to the inventory.
*********************************************************************/
void Store::addProduct(Product* p) 
{
	inventory.push_back(p);
}


/*********************************************************************
* addMember function adds a Member object to members.
*********************************************************************/
void Store::addMember(Customer* c) 
{
	members.push_back(c);
}


/*********************************************************************
* getProductFromID function takes a product ID as an argument, and if it exists in the inventory, returns the product object.
*********************************************************************/
Product* Store::getProductFromID(std::string p) 
{
	for (int i = 0; i < inventory.size(); i++) 
	{
		if (inventory[i]->getIdCode() == p)
			return inventory[i];
	}
	return NULL;
}


/*********************************************************************
*getMemberFromID function takes a member ID as an argument, and if it exists in the inventory, returns the member object.
*********************************************************************/
Customer* Store::getMemberFromID(std::string m) 
{
	for (int i = 0; i < members.size(); i++) 
	{
		if (members[i]->getAccountID() == m) 
			return members[i];
	}
	return NULL;
}


/*********************************************************************
*productSearch function takes a string as an argument and performs a text search in the inventory. If there was a match, it prints the product details.
*********************************************************************/
void Store::productSearch(std::string str) 
{
	bool found = false;
	// set the first letter  to lower case
	std::string str_temp = str;
	if(isupper(str_temp[0]))
		{
			str_temp[0] = tolower(str_temp[0]);
		}
	else
		{
			str_temp[0] = toupper(str_temp[0]);
		}		
	for (int i = 0; i < inventory.size(); i++) 
{	
		// create temp title and description 
		std::string title_temp = inventory[i]->getTitle();
		std::string description = inventory[i]->getDescription();
		// if str found in title or description, print details
		if (title_temp.find(str_temp) != std::string::npos  || description.find(str_temp) != std::string::npos 
			|| title_temp.find(str) !=std::string::npos ||description.find(str) != std::string::npos ) 
		{
			found = true;
			std::cout <<  inventory[i]->getTitle() << std:: endl;
			std::cout << "ID Code: " << inventory[i]->getIdCode() << std::endl;
			std::cout << "Price: " << inventory[i]->getPrice() << std::endl;
			std::cout << inventory[i]->getDescription() << std::endl;
		}
	}
	if (!found)
		std::cout << "No item found.";
}


/*********************************************************************
*addProductToMemberCart  function takes a product ID and member ID as arguments and verifies that:
*		- product ID is in inventory
*		- member ID is in members and
*		- product is still available.
* If all of the above is true, product is added to the member's cart. If not,
prints error in each case.
*********************************************************************/
void Store::addProductToMemberCart(std::string pID, std::string mID) {
	bool productFound = false,
		memberFound = false,
		prodAvail = false;
	int memberIndex = 0, inventoryIndex = 0;

	for (int i = 0; i < inventory.size(); i++) {
		if (inventory[i]->getIdCode() == pID) {
			productFound = true;
			inventoryIndex = i;
		}
		if (inventory[i]->getQuantityAvailable() > 0)
			prodAvail = true;
	}

	for (int i = 0; i < members.size(); i++) {
		if (members[i]->getAccountID() == mID) {
			memberFound = true;
			memberIndex = i;
		}
	}

	if (!productFound)
		std::cout << "Product #" << pID << " not found." << std::endl;
	else if (!memberFound)
		std::cout << "Member #" << mID << " not found." << std:: endl;
	else if (!prodAvail)
		std::cout << "Sorry, product #" << pID << " is currently out of stock."<<std:: endl;
	else {
		members[memberIndex]->addProductToCart(pID);
		std::cout << '\n' << inventory[inventoryIndex]->getTitle() << " added to cart.";
	}
}


/*********************************************************************
* checkOutMember function is used  to checkout a Member. It verifies  the member ID, checks the member's cart if there are sold out items and if it's empty ,and calculates and prints the subtotal, shipping cost, and total cost and clears the cart.
*********************************************************************/
void Store::checkOutMember(std::string mID) {

	int memberIndex = 0;
	double subtotal = 0.0, shipCost, total;
	bool memberFound = false;

	std::cout << "\n";
	
	// validate member ID
	for (int i = 0; i < members.size(); i++) {
		if (members[i]->getAccountID() == mID) {
			memberFound = true;
			memberIndex = i;
		}	
	}

	if (!memberFound)
		std::cout << "Member #" << mID << " not found." <<std::endl;
	else {
		std::vector<std::string> cart = members[memberIndex]->getCart();

		// iterate through the member's cart and check to see if any of the products are sold out.
		// If it's not sold out, print title and price, decrease quantity, and update subtotal cost.
		int totalItems = 0;
		for (int i = 0; i < cart.size(); i++) {
			Product* item = getProductFromID(cart[i]);
			if (item->getQuantityAvailable() > 0) 
			{
				std::cout << "Title:  " << item->getTitle() << " Price: $" << item->getPrice() << '\n';
				totalItems++;
				item->decreaseQuantity();
				subtotal += item->getPrice();
			}
			else
				std::cout << "Sorry, product #" << item->getIdCode() << ",  << item->getTitle() << , is currently out of stock." << std::endl;
		}
		//whether cart is empty
		if(totalItems ==0)
		{
			std::cout <<"There are no items in your cart."<<std::endl;
		return;
		}
		// calculate shipping cost
		if (members[memberIndex]->isPremiumMember())
			shipCost = 0.0;
		else
			shipCost = subtotal * .07;

		total = subtotal + shipCost;

		// print subtotal, shipping cost, and total cost
		std::cout << "Subtotal: $ " << subtotal << std::endl;
		std::cout << "Shipping Cost: $" << shipCost << std::endl;
		std::cout << "Total: $ " << total << std::endl;

		// empty cart
		members[memberIndex]->emptyCart();
	}
}
