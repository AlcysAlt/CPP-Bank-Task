#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>

using namespace std;
class Customer
{
private:
	string name;
	int contactNumber;

public:
	Customer();
	void useCard();
	void setContactNumber(int l);
	int setContactNumber();
	void setName(string i);
	string getName();


};
#endif 
