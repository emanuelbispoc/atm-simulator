#include "ATM_System.h"
#include "handler/BankSystem.h"
#include <stdio.h>
#include <stdlib.h>

sqlite3* ATM_System::db = nullptr;
BankSystem* bank;
bool ativo = true;

void ATM_System::system_Init()
{
	while (ativo) 
	{
		if (true) {
			std::cout << "------------Welcome------------\n\n";
			std::cout << "Insert your code...";      // for simulate inserting of card
			std::cin >> code;

			bank->selectData(code);
		}
	}

};

void ATM_System::transferTo()
{}

void ATM_System::depositTo()
{}

void ATM_System::withdraw()
{}