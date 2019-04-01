/***********************************
 *Author: Du Tram
 *Date: 10/12/2016
 *Description: This is the implementation file of the class BankAccount 
 *
 *
 **********************************/
#include <iostream>
#include <string>
#include "BankAccount.hpp"

using namespace std;
//defaut contructor
BankAccount::BankAccount()
{
	customerName = "Jane Doe";
	customerID = "1A2B3C4D";
	customerBalance = 9898.20;
}

//constructors with three parameters

BankAccount::BankAccount(string name, string id,double bal)
{
	customerName = name;
	customerID = id;
	customerBalance = bal;
}


//get customer's name and return name
string BankAccount::getCustomerName()
{
	return customerName;
}
// get id
string BankAccount::getCustomerID()
{
	return customerID;
}

//get balance
double BankAccount::getCustomerBalance()
{
	return customerBalance;
}

// set 
void BankAccount::setCustomerName(double name)
{
	customerName = name;
}

void BankAccount::setCustomerID(double id)
{
	customerID = id;
}

void BankAccount::setCustomerBalance(double bal)
{
	customerBalance = bal;
}
/******************************
 *Description: This withdraw  function takes an withd amount from customer and deduct the balanceby that anmount and return a new balance 
 *****************************/


double BankAccount::withdraw(double withd)
{
	double newBalance = customerBalance -= withd;
	return newBalance;
}

/**********************************************
 * Description: this function takes in a varibale which is a deposit  and add that to the account, the function will return the new balance after adding the deposit.*
 *********************************************/ 
double BankAccount::deposit(double depo)
{
	double newBalance = customerBalance += depo;
	return newBalance;
}

int main()
{
	
	BankAccount account1("Harry Potter", "K4637", 8032.78);
	cout << account1.getCustomerName() << endl;
	cout << account1.getCustomerID() << endl;
	cout << account1.getCustomerBalance() << endl;
	account1.withdraw(32.78);
	cout << account1.getCustomerBalance() << endl;
	account1.withdraw(1000.00);
	cout << account1.getCustomerBalance() << endl;
	account1.deposit(2000.00);
	cout << account1.getCustomerBalance() << endl;
	account1.withdraw(500.00);
	cout << account1.getCustomerBalance() << endl;
	account1.deposit(500.00);
	cout << account1.getCustomerBalance() << endl;
	double finalBalance = account1.getCustomerBalance();
	cout << finalBalance << endl;
	return 0;
}

