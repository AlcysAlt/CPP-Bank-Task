#include "Account.h"
Account::Account() {
	accountNumber = 1000000;
	accountName = "Default Account Name";
	ownerName = "Default Account Owner";
	balance = 0.0;

}

bool Account::hasCredit() {
	float balanceCheck = getBalance();
	if (balanceCheck >= 1) {
		return true;
	}
	else {
		return false;
	}

}
void Account::transactions() {
	cout << "Showing Transactions \n";
}
//Setter
void Account::setAccountName(string a) {
	accountName = a;

}

//Getter
string Account::getAccountName() {
	return accountName;
}


//Setter
void Account::setAccountNumber(int n) {
	accountNumber = n;
}

//Getter
int Account::getAccountNumber() {
	return accountNumber;
}

//Setter
void Account::setOwnerName(string n) {
	ownerName = n;

}

//Getter
string Account::getOwnerName() {
	return ownerName;
}

//Setter 
void Account::setBalance(float b) {
	balance = b;
}

//Getter
float Account::getBalance() {
	return balance;
}




;