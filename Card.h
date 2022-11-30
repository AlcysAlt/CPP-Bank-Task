#pragma once
#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
using namespace std;
class Card
{
private:
	int pin;
	int cardNumber;
	float expDate;
	string cardOwner;

public:
	Card();

	void setPin(int p);


	int getPin();


	void setCardNumber(int n);

	int getCardNumber();

	void setExpDate(float n);

	float getExpDate();

	void setCardOwner(string o);

	string getCardOwner();


	void pay();
};
#endif