#include "Card.h"
Card::Card() {
	pin = 1000;
	cardNumber = 10000000;
	expDate = 1111.0;
	cardOwner = "Default Card Owner";
}

//Setter
void Card::pay() {
	cout << "Paying... \n";
}
//Setter
void Card::setPin(int p) {
	pin = p;
}
//Getter
int Card::getPin() {
	return pin;
}

//Setter
void Card::setCardNumber(int n) {
	cardNumber = n;
}
//Getter
int Card::getCardNumber() {
	return cardNumber;
}

//Setter
void Card::setExpDate(float n) {
	expDate = n;
}
//Getter
float Card::getExpDate() {
	return expDate;
}

//Setter
void Card::setCardOwner(string o) {
	cardOwner = o;
}
//Getter
string Card::getCardOwner() {
	return cardOwner;
}



;
