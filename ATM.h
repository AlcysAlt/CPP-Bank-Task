#pragma once
#ifndef ATM_H
#define ATM_H
#include <iostream>
#include <string>
using namespace std;
class ATM
{
private:
	string atmAddress;
	string atmName;
	int atmNo;



public:
	ATM();
	
	void setAddress(string a);

	string getAddress();

	void setName(string n);

	string getName();


	void setAtmNo(int n);

	int getAtmNo();

	void withdraw();


};
#endif 
