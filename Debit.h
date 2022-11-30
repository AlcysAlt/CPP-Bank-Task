#pragma once
#ifndef DEBIT_H
#define DEBIT_H
#include <iostream>
#include <string>
#include "Account.h"
using namespace std;
class Debit : public Account
{
private:
	float overdraft;

public:
	//Constructor
	Debit();
	//Setter
	void setOverdraft(float i);
	//Getter
	float getOverdraft();



};

#endif 