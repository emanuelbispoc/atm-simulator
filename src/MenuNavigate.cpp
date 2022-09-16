#include "MenuNavigate.h"

void MenuNavigate::initialMenu() 
{
	std::cout << "------------Welcome------------\n\n";
	std::cout << "Insert your code...";      // for simulate inserting of card
	std::cin >> code;

	
	setCurrentMenu(INITIAL);
}