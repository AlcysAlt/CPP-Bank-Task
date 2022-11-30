#include "Customer.h"
Customer::Customer() {
	name = "Default Customer Name";
	contactNumber = 10000000;
}


void Customer::useCard() {
	cout << "Using Card... \n";
}
//Setter
void Customer::setContactNumber(int l) {
	contactNumber = l;
}
//Getter
int Customer::setContactNumber() {
	return contactNumber;
}
//Setter
void Customer::setName(string i) {
	name = i;

}
//Getter
string Customer::getName() {
	return name;
};