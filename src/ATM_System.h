#pragma once
#include <iostream>
#include <string>
#include "handler/Account.h"
#include "sqlite3.h"

class ATM_System
{

private: 

	std::string code;

public:

	static sqlite3* db;
	char* err;

	ATM_System()
	{
		try
		{
			sqlite3_open("datas.db", &db);
			system_Init();

			sqlite3_close(db);
		}
		catch (const std::exception&)
		{
			std::cout << "ERROR ON SYSTEM:\n" << err << std::endl;
		}
	};

	~ATM_System()
	{};

	void system_Init();
	void transferTo();
	void depositTo();
	void withdraw();
};