#pragma once

#include <iostream>
#include <string>
#include "sqlite3.h"

class ATM_System
{

private: 

	char* err;
	int rc;

public:

	static sqlite3* db;

	ATM_System()
	{
		
		rc = sqlite3_open("datas.db", &db);
		if (rc) {
			std::cout << "ERROR ON SYSTEM:\n" << err << std::endl;
		}
		else {
			system_Init();
		}

		sqlite3_close(db);
	};

	~ATM_System()
	{};

	void system_Init();
	void transferTo();
	void depositTo();
	void withdraw();
};