#include "Bank.h"
Bank::Bank() {
	
		money = 0;
		address = "Default Address";
		sortCode = 100000;
		bankName = "Default Bank Name";
	
}
//Setter
void Bank::setAddress(string a) {
	address = a;
}
//Getter
string Bank::getAddress() {
	return address;
}

//Setter
void Bank::setBankName(string b) {
	bankName = b;
}

//Getter
string Bank::getBankName() {
	return bankName;
}

//Setter
void Bank::setSortCode(int s) {
	sortCode = s;
}

//Getter 
int Bank::getSortCode() {
	return sortCode;
}

//Setter
void Bank::setMoney(float m) {
	money = m;
}

//Getter 
float Bank::getMoney() {
	return money;
}
void Bank::withdraw() {
	cout << "Withdrawing Money... \n";
}
void Bank::deposit() {
	cout << "Depositing Money... \n";
};
