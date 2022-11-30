#pragma once
#ifndef BANK_H
#define BANK_H
#include <iostream>
#include <string>
using namespace std;
class Bank
{
private:
	string address;
	string bankName;
	int sortCode;
	float money;


public:
	Bank();

	void setAddress(string a);

	string getAddress();


	void setBankName(string b);


	string getBankName();

	void setSortCode(int s);

	int getSortCode();

	void setMoney(float m);

	float getMoney();

	void withdraw();
	void deposit();
};
#endif 
