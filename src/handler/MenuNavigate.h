#pragma once

#include "BankSystem.h"


class MenuNavigate
{
private:
	BankSystem* bank;
	std::string code;

public:

	void initialMenu(){
		std::cout << "------------Welcome------------\n\n";
		std::cout << "Insert your code...";      // for simulate inserting of card
		std::cin >> code;

		bank->selectData(code);
	}
};