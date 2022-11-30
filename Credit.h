#pragma once
#ifndef CREDIT_H
#define CREDIT_H
#include <iostream>
#include <string>
#include "Account.h"
using namespace std;
class Credit : public Account
{

public:
	void payBills();

};
#endif 