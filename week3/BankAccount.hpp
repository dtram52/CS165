#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP
#include <string>// need string
using namespace std;
class BankAccount
{
	private:
		string customerName;
		string customerID;
		double customerBalance;
	public:                                                                 
		//default constructor
		BankAccount();
		//constructor
		BankAccount(string,string,double);
		//get
		string getCustomerName();
		string getCustomerID();
		double getCustomerBalance();
		//set
		void setCustomerName(double);
		void setCustomerID(double);
		void setCustomerBalance(double);
		//functions
		double withdraw(double);
		double deposit(double);
};
#endif
