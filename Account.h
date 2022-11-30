#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
#include "Bank.h"
using namespace std;
class Account : public Bank
{
private:
	int accountNumber;
	string accountName;
	string ownerName;
	float balance;



public:
	Account();
	
	void setAccountName(string a);
	string getAccountName();
	void setAccountNumber(int n);
	int getAccountNumber();
	void setOwnerName(string n);

	string getOwnerName();

	void setBalance(float);


	float getBalance();




	bool hasCredit();
	void transactions();


};
#endif 
