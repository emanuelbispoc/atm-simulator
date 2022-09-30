#include "MenuNavigate.h"


BankSystem* bank = new BankSystem();;
BankAccount acc;

void MenuNavigate::initialMenu() 
{
	std::cout << "------------Welcome------------\n\n";
	std::cout << "Insert your code...";      // for simulate inserting of card
	std::cin >> code;

	acc = bank->getAccount(code);
	
	setCurrentMenu(INITIAL);
}

MenuNavigate::~MenuNavigate() {
	delete bank;
};