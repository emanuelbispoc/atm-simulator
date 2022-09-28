#include "MenuNavigate.h"


BankSystem bank;
BankAccount acc;

void MenuNavigate::initialMenu() 
{
	std::cout << "------------Welcome------------\n\n";
	std::cout << "Insert your code...";      // for simulate inserting of card
	std::cin >> code;

	acc = bank.getAccount(code);
	setCurrentMenu(INITIAL);
}