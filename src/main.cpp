#include <iostream>
#include "ATM_System.h"

ATM_System* atm = nullptr;

int main() {

	atm = new ATM_System();
	delete atm;

	return 0;
}