#pragma once
#include "../ATM_System.h"

class SQLCommands 
{
private:

	static const char* sql;

public:

	static void updateData(std::string data);
	static void selectData(std::string data); //should search only by code

	bool isSucess(bool s) { return s; };
};
