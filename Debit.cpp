#include "Debit.h"
Debit::Debit() {
	overdraft = 0.0;
}

//Setter
void Debit::setOverdraft(float i) {
	overdraft = i;

}
//Getter
float Debit::getOverdraft() {
	return overdraft;
};