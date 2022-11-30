#include <iostream>
#include <string>
#include "Bank.h"
#include "ATM.h"
#include "Card.h"
#include "Account.h"
#include "Customer.h"
#include "Savings.h"
#include "Credit.h"
#include "Debit.h"
using namespace std;
/* Destructors
 ~Bank() {
	cout << bankName << " deleted from Banks \n";
}

~ATM() {
	cout << atmNo << " deleted from ATMs \n";
}

~Card() {
		cout << cardNumber << " deleted from Cards \n";
	}

~Account() {
		cout << accountNumber << " deleted from Accounts \n";
	}

~Customer() {
		cout << name << " deleted from Customer \n";
	}
*/

int checkAccounts() {
	Savings savings1;
	Card card1;
	savings1.setOwnerName("John Smith");
	savings1.setAccountNumber(12345678);
	savings1.setAccountName("Lloyds Savings Account");
	savings1.setBalance(145.56);

	card1.setCardNumber(3445345);
	card1.setCardOwner("John Smith");
	card1.setExpDate(14 / 06 / 2025);
	card1.setPin(1234);



	cout << "Account Owner: " << savings1.getOwnerName() << endl;
	cout << "Account Number: " << savings1.getAccountNumber() << endl;
	cout << "Account Name: " << savings1.getAccountName() << endl;
	cout << "Account Balance: " << savings1.getBalance() << endl;

	cout << "Card Owner: " << card1.getCardOwner() << endl;
	cout << "Card Number: " << card1.getCardNumber() << endl;
	cout << "Expiration Date: " << card1.getExpDate() << endl;
	cout << "Pin: " << card1.getPin() << endl;
	return 0;
}

int main()
{

	checkAccounts();
}

