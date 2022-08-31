#include "ATM_System.h"
#include <stdio.h>
#include <stdlib.h>

sqlite3* ATM_System::db = nullptr;
MenuNavigate nav;

void ATM_System::system_Init()
{
	bool ativo = true;
	int teste = 0;


	while (ativo) 
	{
		switch (teste)
		{
		case INITIAL: nav.initialMenu(); break;
		default:
			break;
		}
	
	}

};

void ATM_System::transferTo()
{}

void ATM_System::depositTo()
{}

void ATM_System::withdraw()
{}