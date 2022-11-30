#include "ATM.h"
ATM::ATM() {
	atmAddress = "Default ATM Address";
	atmName = "Default ATM Name";
	atmNo = 10000;
}


void ATM::withdraw() {
	cout << "Withdrawing Money... \n";
}
//Setter
void ATM::setAddress(string a) {
	atmAddress = a;
}
//Getter
string ATM::getAddress() {
	return atmAddress;
}

//Setter
void ATM::setName(string n) {
	atmName = n;
}
//Getter
string ATM::getName() {
	return atmName;
}

//Setter
void ATM::setAtmNo(int n) {
	atmNo = n;
}
//Getter
int ATM::getAtmNo() {
	return atmNo;
};